#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


// Estrutura de um nó da lista contendo informações de uma pessoa
typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    struct Pessoa *prox;   // ponteiro para o próximo nó
} Pessoa;

// ---------------------------------------------------------
// Inserir pessoa no início da lista
// ---------------------------------------------------------
void inserirInicio(Pessoa **lista) {
    Pessoa *nova = (Pessoa*) malloc(sizeof(Pessoa));
    if (!nova) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    // Coleta os dados da nova pessoa
    printf("Digite o nome: ");
    scanf(" %49[^\n]", nova->nome);   // lê até 49 caracteres ou até nova linha
    printf("Digite a idade: ");
    scanf("%d", &nova->idade);
    printf("Digite a altura: ");
    scanf("%f", &nova->altura);

    // Inserção no início
    nova->prox = *lista;
    *lista = nova;      // agora a nova pessoa é o primeiro nó
}

// ---------------------------------------------------------
// Inserir pessoa no fim da lista
// ---------------------------------------------------------
void inserirFim(Pessoa **lista) {
    Pessoa *nova = (Pessoa*) malloc(sizeof(Pessoa));
    if (!nova) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    // Coleta os dados da nova pessoa
    printf("Digite o nome: ");
    scanf(" %49[^\n]", nova->nome);
    printf("Digite a idade: ");
    scanf("%d", &nova->idade);
    printf("Digite a altura: ");
    scanf("%f", &nova->altura);

    nova->prox = NULL;   // último nó sempre aponta para NULL

    // Caso a lista esteja vazia
    if (*lista == NULL) {
        *lista = nova;
        return;
    }

    // Procura o último nó
    Pessoa *aux = *lista;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = nova;   // insere no fim
}

// ---------------------------------------------------------
// Remover pessoa pelo nome
// ---------------------------------------------------------
void removerPorNome(Pessoa **lista, char nome[]) {
    if (*lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    Pessoa *aux = *lista;
    Pessoa *anterior = NULL;

    // Busca a pessoa pelo nome
    while (aux != NULL && strcmp(aux->nome, nome) != 0) {
        anterior = aux;
        aux = aux->prox;
    }

    // Não encontrou
    if (aux == NULL) {
        printf("Pessoa '%s' não encontrada!\n", nome);
        return;
    }

    // Se é o primeiro elemento
    if (anterior == NULL) {
        *lista = aux->prox;
    } else {
        anterior->prox = aux->prox;
    }

    free(aux);   // libera memória
    printf("Pessoa removida com sucesso!\n");
}

// ---------------------------------------------------------
// Mostrar todas as pessoas da lista
// ---------------------------------------------------------
void mostrarLista(Pessoa *lista) {
    if (lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    printf("\n--- LISTA DE PESSOAS ---\n");
    while (lista != NULL) {
        printf("Nome: %s\n", lista->nome);
        printf("Idade: %d\n", lista->idade);
        printf("Altura: %.2f\n\n", lista->altura);
        lista = lista->prox;
    }
}

// ---------------------------------------------------------
// Função principal com menu
// ---------------------------------------------------------
int main(void) {
    system("chcp 65001 > nul");
    setlocale(LC_ALL,"pt_BR.UTF-8");
    Pessoa *lista = NULL;
    int opcao;
    char nome[50];

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Inserir pessoa no início\n");
        printf("2 - Inserir pessoa no fim\n");
        printf("3 - Remover pessoa por nome\n");
        printf("4 - Mostrar lista\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpa o \n do buffer

        switch (opcao) {
            case 1:
                inserirInicio(&lista);
                break;

            case 2:
                inserirFim(&lista);
                break;

            case 3:
                printf("Digite o nome da pessoa a remover: ");
                scanf(" %49[^\n]", nome);
                removerPorNome(&lista, nome);
                break;

            case 4:
                mostrarLista(lista);
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    // Libera a memória antes de sair
    Pessoa *aux;
    while (lista != NULL) {
        aux = lista;
        lista = lista->prox;
        free(aux);
    }

    return 0;
}
