#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Estrutura de um nó de fila
typedef struct Fila {
    char nome[50];      // Nome da pessoa
    int senha;          // Número da senha
    struct Fila *prox;  // Ponteiro para o próximo nó
} Fila;

// Função para gerar nova senha e enfileirar
void gerarSenha(Fila **inicio, Fila **fim) {
    Fila *nova = (Fila*) malloc(sizeof(Fila));
    if (!nova) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    // Coleta os dados da nova pessoa
    printf("Digite o nome: ");
    scanf(" %49[^\n]", nova->nome);   // Lê o nome da pessoa
    nova->senha = rand() % 1000 + 1;  // Gera uma senha aleatória entre 1 e 1000

    nova->prox = NULL;

    // Se a fila estiver vazia, a nova pessoa é a primeira
    if (*inicio == NULL) {
        *inicio = *fim = nova;
    } else {
        (*fim)->prox = nova;   // Caso contrário, insere no fim
        *fim = nova;
    }

    printf("Pessoa %s com senha %d adicionada à fila!\n", nova->nome, nova->senha);
}

// Função para chamar a próxima pessoa (desenfileirar)
void chamarProximaPessoa(Fila **inicio) {
    if (*inicio == NULL) {
        printf("A fila está vazia!\n");
        return;
    }

    // Remove a pessoa da frente da fila
    Fila *aux = *inicio;
    *inicio = aux->prox;   // A pessoa à frente passa a ser a próxima
    printf("Chamando %s com a senha %d...\n", aux->nome, aux->senha);

    free(aux);  // Libera a memória do nó removido
}

// Função para mostrar a fila atual
void mostrarFila(Fila *inicio) {
    if (inicio == NULL) {
        printf("A fila está vazia!\n");
        return;
    }

    printf("\n--- Fila Atual ---\n");
    Fila *aux = inicio;
    while (aux != NULL) {
        printf("Nome: %s, Senha: %d\n", aux->nome, aux->senha);
        aux = aux->prox;
    }
    printf("\n");
}

int main(void) {
    system("chcp 65001 > nul");
    setlocale(LC_ALL,"pt_BR.UTF-8");
    Fila *inicio = NULL, *fim = NULL;
    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Gerar nova senha e enfileirar\n");
        printf("2 - Chamar próxima pessoa (desenfileirar)\n");
        printf("3 - Mostrar fila atual\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer de entrada

        switch (opcao) {
            case 1:
                gerarSenha(&inicio, &fim);
                break;
            case 2:
                chamarProximaPessoa(&inicio);
                break;
            case 3:
                mostrarFila(inicio);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    // Libera a memória antes de encerrar
    Fila *aux;
    while (inicio != NULL) {
        aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }

    return 0;
}
