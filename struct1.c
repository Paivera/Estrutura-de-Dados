#include <stdio.h>

#define QTD 5

struct Agenda {
    char nome[30];
    int idade;
    char telefone[10];
};

void lerContatos(struct Agenda contatos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", contatos[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &contatos[i].idade);
        printf("Digite o telefone: ");
        scanf("%s", contatos[i].telefone);
    }
}

void imprimirContatos(struct Agenda contatos[], int n) {
    printf("\nDados lidos:\n");
    for (int i = 0; i < n; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Nome: %s", contatos[i].nome);
        printf("Idade: %d\n", contatos[i].idade);
        printf("Telefone: %s\n", contatos[i].telefone);
    }
}

int main() {

    struct Agenda contatos[QTD];

    lerContatos(contatos, QTD);
    imprimirContatos(contatos, QTD);

    return 0;
}