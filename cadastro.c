#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define max_pessoas 30

// struct 
struct pessoa {
    char nome[40];
    int idade;
    int ativo;
    char nascimento[30];
};
struct pessoa pessoas[max_pessoas];

// funções do código 
void menu();
void cadastrar();
void remover();
void listar();
void pesquisar();

// função main
int main() {   
    menu();
    return 0;
}


//função inicial
void menu() {

    int escolha; 
    system("clear");

    do{

        printf("\n1 - Cadastrar pessoa\n2 - Remover pessoa\n3 - Listar pessoas\n4 - Pesquisar pessoa\n0 - Sair\n");
        scanf("%d", &escolha);
        getchar();

        switch (escolha) {
        case 0: 
            break;

        case 1:
            cadastrar();
            break;
    
        case 2: 
            remover();
            break;

        case 3: 
            listar();
            break;

        case 4: 
            pesquisar();
            break;

        default:
            printf("Opção inválida.\nEscolha uma operação:");
        }
        getchar();

    } while(escolha!=0);
}

// função: cadastrar pessoa
void cadastrar() {
    int i, idade;
    char nome[40];
    char nascimento[30];

    for (i = 0; i < max_pessoas; i++) {
        if (pessoas[i].ativo == 0) {
            printf("\nNome: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0'; // Remover a nova linha deixada pelo fgets

            printf("Idade: ");
            scanf("%d", &idade);
            getchar(); // Consumir a nova linha deixada pelo scanf

            printf("Data de nascimento (DD/MM/AAAA): ");
            fgets(nascimento, sizeof(nascimento), stdin);
            nascimento[strcspn(nascimento, "\n")] = '\0'; // Remover a nova linha deixada pelo fgets

            strcpy(pessoas[i].nome, nome);
            pessoas[i].idade = idade;
            strcpy(pessoas[i].nascimento, nascimento);
            pessoas[i].ativo = 1;
            break;
        }
    }
}

// função: remover pessoa
void remover() {

    int ID;
    listar();

    printf("Digite o ID da pessoa a ser removida: ");
    scanf("%d", &ID);
    --ID;
    
    pessoas[ID].ativo=0;
    printf("\nPessoa excuída do cadastro.\n");
    getchar();

}

// função: listar pessoas
void listar() {

    system("clear");
    printf("\nLista de pessoas\n");

    // listar cada item da struct para cada cadastro da struct
    for (int i = 0; i<max_pessoas; i++) {
        if (pessoas[i].ativo==1) {
            printf("\nID: %d\n", i+1);
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].idade);
            printf("Data de nascimento: %s\n", pessoas[i].nascimento);
            printf("\n------------------\n");
        }
    }
}

// função: pesquisar pessoa
void pesquisar() {

    int e;
    char nome[40];

    do { 
        system("clear");
        printf("\nDigite o nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        // percorre todos os cadastros para encontrar o escolhido
        for (int i=0; i < max_pessoas; i++) {
            if (strstr(pessoas[i].nome, nome)!=NULL) 
            {
                printf("\nID: %d\n", i+1);
                printf("Nome: %s\n", pessoas[i].nome);
                printf("Idade: %d\n", pessoas[i].idade);
                printf("Data de nascimento: %s\n", pessoas[i].nascimento);
                printf("\n------------------\n");
            }
        }
        printf("\n0 - Sair\n1 - Nova pesquisa\n");
        scanf("%d", &e);
        getchar();

    } while(e!=0);
}
