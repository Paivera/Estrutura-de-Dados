#include <stdio.h>
#include <stdlib.h>

struct RgData {
    int dia;
    int mes;
    int ano;
};

struct RgAluno {
    char nome[35];
    float nota[4];
    struct RgData data;
    float media;
};

void lerDados(struct RgAluno aluno[], int j) {
    printf("\nNome do aluno: ");
    scanf("%s", &aluno[j].nome);
    printf("Data de Nascimento:\n\n");

    printf("Dia de Nascimento: \n");
    scanf("%d", &aluno[j].data.dia);

    printf("Mês de Nascimento: \n");
    scanf("%d", &aluno[j].data.mes);

    printf("Ano de Nascimento: \n");
    scanf("%d", &aluno[j].data.ano);
    
    printf("Digite as notas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nota[%d]: \n", i + 1);
        scanf("%f", &aluno[j].nota[i]);
    }
}

void calcularMedia(struct RgAluno aluno[], int j) {
    float soma = 0;
    for (int i = 0; i < 4; i++) {
        soma += aluno[j].nota[i];
    }
    aluno[j].media = soma / 4;
}

void imprimirDados(struct RgAluno aluno[], int i) {
    printf("Nome: %s\n", aluno[i].nome);
    printf("Data de Nascimento: %d/%d/%d\n", aluno[i].data.dia, aluno[i].data.mes, aluno[i].data.ano);
    for (int j = 0; j < 4; j++) {
        printf("Nota[%d]: %.2f\n", j + 1, aluno[i].nota[j]);
    }
    printf("Média: %.2f\n", aluno[i].media);
}

int main() {
    int n = 5;
    struct RgAluno alunos[n];

    for (int i = 0; i < n; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        lerDados(alunos, i);
        calcularMedia(alunos, i);
    }

    for (int i = 0; i < n; i++) {
        printf("\nDados do aluno %d:\n", i + 1);
        imprimirDados(alunos, i);
    }
    return 0;
}