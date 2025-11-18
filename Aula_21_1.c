#include <stdio.h>   // Biblioteca para entrada e saída (printf, scanf)
#include <stdlib.h> // Biblioteca para malloc e free
#include <locale.h>

// Estrutura de um nó da lista
typedef struct No {
    int valor;          // valor armazenado no nó
    struct No *prox;    // ponteiro para o próximo nó
} No;

// ---------------------------------------------------------
// Função para inserir um elemento no início da lista
// ---------------------------------------------------------
void inserirInicio(No **lista, int valor) {
    // Aloca memória para um novo nó
    No *novo = (No*) malloc(sizeof(No));
    if (!novo) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    novo->valor = valor;    // armazena o valor no nó
    novo->prox = *lista;    // aponta para o antigo primeiro nó
    *lista = novo;          // agora o novo nó é o primeiro da lista
}

// ---------------------------------------------------------
// Função para inserir um elemento no fim da lista
// ---------------------------------------------------------
void inserirFim(No **lista, int valor) {
    // Aloca memória para o novo nó
    No *novo = (No*) malloc(sizeof(No));
    if (!novo) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    novo->valor = valor;
    novo->prox = NULL;      // no fim, sempre aponta para NULL

    // Se a lista está vazia, o novo nó vira o primeiro
    if (*lista == NULL) {
        *lista = novo;
        return;
    }

    // Percorre até o último nó
    No *aux = *lista;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;  // o último nó aponta para o novo nó
}

// ---------------------------------------------------------
// Função para remover um nó por valor
// ---------------------------------------------------------
void removerValor(No **lista, int valor) {
    if (*lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    No *aux = *lista;
    No *anterior = NULL;

    // Procura o nó com o valor desejado
    while (aux != NULL && aux->valor != valor) {
        anterior = aux;     // guarda o nó anterior
        aux = aux->prox;    // vai para o próximo
    }

    // Se chegou ao final e não encontrou
    if (aux == NULL) {
        printf("Valor não encontrado!\n");
        return;
    }

    // Se o nó a remover é o primeiro
    if (anterior == NULL) {
        *lista = aux->prox;     // move o início da lista
    } else {
        anterior->prox = aux->prox; // pula o nó removido
    }

    free(aux);              // libera a memória do nó removido
    printf("Valor removido!\n");
}

// ---------------------------------------------------------
// Função para mostrar todos os elementos da lista
// ---------------------------------------------------------
void mostrarLista(No *lista) {
    if (lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    printf("Lista: ");
    while (lista != NULL) {        // percorre até o fim da lista
        printf("%d ", lista->valor);
        lista = lista->prox;
    }
    printf("\n");
}

// ---------------------------------------------------------
// Função principal (menu)
// ---------------------------------------------------------
int main(void) {
    system("chcp 65001 > nul");
    setlocale(LC_ALL,"pt_BR.UTF-8");
    No *lista = NULL;    // lista começa vazia
    int opcao, valor;

    do {
        // Mostra o menu
        printf("\n--- MENU ---\n");
        printf("1 - Inserir elemento no início\n");
        printf("2 - Inserir elemento no fim\n");
        printf("3 - Remover elemento por valor\n");
        printf("4 - Mostrar lista\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Executa a ação escolhida
        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirInicio(&lista, valor);
                break;

            case 2:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirFim(&lista, valor);
                break;

            case 3:
                printf("Digite o valor a remover: ");
                scanf("%d", &valor);
                removerValor(&lista, valor);
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

    } while (opcao != 5);   // repete até escolher sair

    // Libera toda a memória alocada antes de encerrar
    No *aux;
    while (lista != NULL) {
        aux = lista;
        lista = lista->prox;
        free(aux);
    }

    return 0;
}
