// ======================================================================
// PROGRAMA: Manipulação de Arquivos Binários com Struct em C
// OBJETIVO: Cadastrar e listar pessoas em um arquivo binário (pessoas.dat)
// AUTOR: ChatGPT (explicações detalhadas linha a linha)
// ======================================================================

#include <stdio.h>   // Biblioteca padrão de entrada/saída (printf, scanf, fopen, etc)
#include <stdlib.h>  // Biblioteca de utilidades gerais (exit, malloc, etc)
#include <string.h>  // Biblioteca para manipulação de strings (strlen, strcpy, etc)

// ----------------------------------------------------------------------
// Definição de uma estrutura (struct) chamada Pessoa
// Uma struct é um tipo de dado que pode agrupar várias informações diferentes
// ----------------------------------------------------------------------
struct Pessoa {
    char nome[50];  // Vetor de 50 caracteres para armazenar o nome (permite espaços)
    int idade;      // Inteiro para armazenar a idade
};

// ----------------------------------------------------------------------
// Declaração (protótipo) das funções que serão definidas depois do main()
// Isso diz ao compilador que essas funções existem e podem ser chamadas
// antes de sua definição real aparecer no código.
// ----------------------------------------------------------------------
void cadastrar();  // Função responsável por cadastrar (salvar) uma pessoa no arquivo
void listar();     // Função responsável por ler e mostrar todas as pessoas cadastradas

// ======================================================================
// FUNÇÃO PRINCIPAL - ponto de entrada do programa
// ======================================================================
int main() {
    int opcao; // variável para guardar a escolha do usuário no menu

    // O loop 'do...while' repete o menu até o usuário escolher sair (opção 3)
    do {
        // Mostra o menu de opções na tela
        printf("\n=== MENU ===\n");
        printf("1 - Cadastrar pessoa\n");
        printf("2 - Listar pessoas\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        
        // Lê a opção digitada pelo usuário
        scanf("%d", &opcao);

        // Após usar scanf, o ENTER (caractere '\n') fica "preso" no buffer do teclado
        // Usamos getchar() para limpar esse ENTER e evitar que atrapalhe o próximo fgets()
        getchar();

        // Escolhe o que fazer de acordo com a opção escolhida
        switch (opcao) {
            case 1:
                cadastrar();  // Chama a função de cadastro
                break;

            case 2:
                listar();     // Chama a função de listagem
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);  // Repete enquanto a opção for diferente de 3 (sair)

    return 0;  // Indica que o programa terminou corretamente
}

// ======================================================================
// FUNÇÃO: cadastrar()
// OBJETIVO: Solicitar os dados da pessoa e gravar no arquivo binário
// ======================================================================
void cadastrar() {
    struct Pessoa p;    // Cria uma variável 'p' do tipo struct Pessoa
    FILE *arquivo;      // Ponteiro para manipular o arquivo

    printf("\n--- Cadastro de Pessoa ---\n");

    // ---------------------------------------------------------------
    // Lê o nome da pessoa usando fgets()
    // fgets() é usada em vez de scanf("%s") porque permite ler nomes com espaços
    // ---------------------------------------------------------------
    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin); // lê até 49 caracteres ou até o ENTER

    // ---------------------------------------------------------------
    // fgets() deixa o ENTER ('\n') dentro da string. Exemplo:
    // Se o usuário digitar "Maria", p.nome = "Maria\n\0"
    // Aqui removemos o '\n' substituindo por '\0' (fim da string)
    // ---------------------------------------------------------------
    size_t len = strlen(p.nome);
    if (len > 0 && p.nome[len - 1] == '\n') {
        p.nome[len - 1] = '\0';
    }

    // ---------------------------------------------------------------
    // Lê a idade da pessoa
    // ---------------------------------------------------------------
    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    // Limpa o ENTER deixado no buffer após o scanf
    getchar();

    // ---------------------------------------------------------------
    // Abre o arquivo binário para gravação no modo "ab":
    // "a"  → append (acrescentar no final, sem apagar o que já existe)
    // "b"  → modo binário (dados gravados exatamente como estão na memória)
    //
    // Se o arquivo não existir, ele será criado automaticamente.
    // ---------------------------------------------------------------
    arquivo = fopen("pessoas.dat", "ab");

    // Verifica se houve erro ao abrir o arquivo (ex: falta de permissão)
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para gravacao!\n");
        return; // Sai da função sem tentar gravar
    }

    // ---------------------------------------------------------------
    // Escreve os dados da struct no arquivo usando fwrite()
    // fwrite(parâmetro 1, tamanho de cada bloco, quantidade, arquivo)
    // ---------------------------------------------------------------
    fwrite(&p, sizeof(struct Pessoa), 1, arquivo);

    // Fecha o arquivo para liberar o recurso do sistema
    fclose(arquivo);

    printf("Pessoa cadastrada com sucesso!\n");
}

// ======================================================================
// FUNÇÃO: listar()
// OBJETIVO: Ler o arquivo binário e exibir todas as pessoas cadastradas
// ======================================================================
void listar() {
    struct Pessoa p;    // Variável para receber os dados lidos do arquivo
    FILE *arquivo;      // Ponteiro para manipular o arquivo
    int count = 0;      // Contador para saber quantos registros foram exibidos

    // ---------------------------------------------------------------
    // Abre o arquivo em modo "rb" (read binary)
    // "r" → leitura (read)
    // "b" → binário
    //
    // Se o arquivo não existir, fopen retornará NULL
    // ---------------------------------------------------------------
    arquivo = fopen("pessoas.dat", "rb");

    // Caso o arquivo ainda não exista, não há nada para listar
    if (arquivo == NULL) {
        printf("\nNenhum cadastro encontrado (arquivo inexistente).\n");
        return;
    }

    printf("\n--- Lista de Pessoas ---\n");

    // ---------------------------------------------------------------
    // fread() lê dados binários do arquivo e coloca dentro da variável p
    // fread(destino, tamanho de cada bloco, quantidade, arquivo)
    //
    // A função retorna a quantidade de blocos lidos com sucesso.
    // Enquanto for igual a 1, significa que conseguiu ler uma struct completa.
    // ---------------------------------------------------------------
    while (fread(&p, sizeof(struct Pessoa), 1, arquivo) == 1) {
        // Exibe na tela os dados da struct lida
        printf("Nome: %s\n", p.nome);
        printf("Idade: %d\n", p.idade);
        printf("----------------------\n");
        count++; // Incrementa o contador de registros
    }

    // Caso o arquivo esteja vazio
    if (count == 0)
        printf("Nenhum registro encontrado.\n");

    // Fecha o arquivo após a leitura
    fclose(arquivo);
    return 0;
}
