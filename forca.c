#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

void forca(int status){

//  Desenhos!
    if (status==0){
        printf("\n ------------");
        printf("\n |          |");
        printf("\n |           ");
        printf("\n |           ");
        printf("\n |           ");
        printf("\n -           ");
        printf("\n");
    }
    else if (status==1){
        printf("\n ------------");
        printf("\n |          |");
        printf("\n |          O");
        printf("\n |           ");
        printf("\n |           ");
        printf("\n -           ");
        printf("\n");        
    }
    else if (status==2){
        printf("\n ------------");
        printf("\n |          |");
        printf("\n |          O");
        printf("\n |          #");
        printf("\n |           ");
        printf("\n -           ");
        printf("\n"); 
    }
    else if (status==3){
        printf("\n ------------");
        printf("\n |          |");
        printf("\n |          O");
        printf("\n |         /#");
        printf("\n |           ");
        printf("\n -           ");
        printf("\n");   
    }
    else if (status==4){
        printf("\n ------------");
        printf("\n |          |");
        printf("\n |          O");
        printf("\n |         /#\\");
        printf("\n |           ");
        printf("\n -           ");
        printf("\n");  
    }
    else if (status==5){
        printf("\n ------------");
        printf("\n |          |");
        printf("\n |          O");
        printf("\n |         /#\\");
        printf("\n |         / ");
        printf("\n -           ");
        printf("\n");  
    }
    else if (status==6){
        printf("\n ------------");
        printf("\n |          |");
        printf("\n |          O");
        printf("\n |         /#\\     Perdeu o jogo :( ");
        printf("\n |         / \\");
        printf("\n -           "); 
        printf("\n");
    }    
}  

int main() {

    // Definição das variáveis
    size_t i;
    int erro = 0;
    int c_erro;    // controle, 1=errou, 0=não errou
    char letra;
    char palavra[50];
    char resposta[50];
    
    // Definição da palavra  
    printf("Digite a palavra para iniciar o jogo (não inclua acentos) \n");
    fgets(palavra, 50, stdin);
    palavra[strlen(palavra)-1]='\0';
    strcpy(resposta, palavra);
    
    // Preparando a área de respostas
    for (i=0; i<strlen(resposta); i++){
        resposta[i]='_';
    }

    // Preparando o terminal para o início do jogo  
    for (i=0; i<50; i++) {
        printf("\n");
    }

    // Início do jogo  
    printf("A palavra possui %lu letras! \n", strlen(palavra));

    while(1) {

        c_erro=1; 
        forca(erro);
        printf("\n Qual letra quer adicionar?  ");

        // Estado atual do jogo, deixar mais espaço entre cada underline
        for (i=0; i<strlen(resposta); i++){
            printf("%c ", resposta[i]);
        }
        printf("\n");

        // Início das rodadas:
        scanf(" %c", &letra);

        // Compara as letras - se forem iguais, substitui o underline
        for (i=0; i<strlen(resposta); i++){
            if (palavra[i]==letra){
                resposta[i]=letra;
                c_erro=0;          
            }
        }

        // Caso a letra não esteja na palavra 
        if(c_erro==1){             
            erro++;
        }

        // Perdeu! 
        if(erro==6){
            forca(6);
            break;
        }
        
        // Ganhou!
        if(strcmp(resposta,palavra)==0){

            printf("\n ------------");
            printf("\n |          |");
            printf("\n |           ");
            printf("\n |     \\O/     A palavra era %s!", resposta);
            printf("\n |      |      Você ganhou! ");
            printf("\n -     / \\  ");
            printf("\n");
            break;
        }
    }
    return 0; 
}
