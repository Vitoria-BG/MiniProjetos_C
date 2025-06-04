#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int jogador=1;       // variável de controle para jogador 1 e jogador 2
    int partidas=0;
    int i, j;                  
    int linha, coluna;        
    char jogo[3][3];

    // iniciar a matriz
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            jogo[i][j]=' ';
        }
    }
    
    while(1) {
        
        for (i=0; i<40; i++) {
                printf("\n");
        }

        // imprimir jogo #

        printf("   1      2      3 \n");
        printf("\n");
        for (i=0; i<3; i++) {
            printf("%d  ", i+1);
            for (j=0; j<3; j++) {
                printf(" %c ", jogo[i][j]);
                if (j<2) {
                    printf(" |");
                }
            }
            if (i<2) {
                printf("\n  -----------------\n");
            }
        }
        printf("\n");        
    

        // ler jogada
        if(jogador==1) {
            printf("\n");
            printf("Vez do JOGADOR 1. Em qual linha e coluna quer jogar?\n");
        }

        else if(jogador==2) {
            printf("\n");
            printf("Vez do JOGADOR 2. Em qual linha e coluna quer jogar?\n");
        }

        printf("Linha:\n");
        scanf("%d", &linha);
        printf("Coluna:\n");
        scanf("%d", &coluna);

        // salvar jogada e passar a vez para o próximo jogador 
        if(jogador==1) {
            jogo[linha-1][coluna-1]='X';
            jogador=2;
        }

        else if(jogador==2) {
            jogo[linha-1][coluna-1]='O';
            jogador=1;
        }

        // verificar linhas para jogador 1 
        if(((jogo[0][0]=='X') && (jogo[0][1]=='X') && (jogo[0][2]=='X')) ||
           ((jogo[1][0]=='X') && (jogo[1][1]=='X') && (jogo[1][2]=='X')) ||
           ((jogo[2][0]=='X') && (jogo[2][1]=='X') && (jogo[2][2]=='X'))) {
            for (i=0; i<40; i++) {
                printf("\n");
            }
            for (i=0; i<3; i++) {
                printf("  ");
                for (j=0; j<3; j++) {
                    printf(" %c ", jogo[i][j]);
                    if (j<2) {
                        printf(" |");
                    }
                }
                if (i<2) {
                    printf("\n  -----------------\n");
                }
            }
            printf("\n");
            printf("\nJOGADOR 1 venceu!\nLinha completa.\n");
            break;
           }
        
        // verificar linhas para jogador 2 
        if(((jogo[0][0]=='O') && (jogo[0][1]=='O') && (jogo[0][2]=='O')) ||
           ((jogo[1][0]=='O') && (jogo[1][1]=='O') && (jogo[1][2]=='O')) ||
           ((jogo[2][0]=='O') && (jogo[2][1]=='O') && (jogo[2][2]=='O'))) {
            for (i=0; i<40; i++) {
                printf("\n");
            }
            for (i=0; i<3; i++) {
                printf("  ");
                for (j=0; j<3; j++) {
                    printf(" %c ", jogo[i][j]);
                    if (j<2) {
                        printf(" |");
                    }
                }
                if (i<2) {
                    printf("\n  -----------------\n");
                }
            }
            printf("\n");
            printf("\nJOGADOR 2 venceu!\nLinha completa.\n");
            break;
           }

        // verificar colunas para jogador 1  
        if(((jogo[0][0]=='X') && (jogo[1][0]=='X') && (jogo[2][0]=='X')) ||
           ((jogo[0][1]=='X') && (jogo[1][1]=='X') && (jogo[2][1]=='X')) ||
           ((jogo[0][2]=='X') && (jogo[1][2]=='X') && (jogo[2][2]=='X'))) {
            for (i=0; i<40; i++) {
                printf("\n");
            }
            for (i=0; i<3; i++) {
                printf("  ");
                for (j=0; j<3; j++) {
                    printf(" %c ", jogo[i][j]);
                    if (j<2) {
                        printf(" |");
                    }
                }
                if (i<2) {
                    printf("\n  -----------------\n");
                }
            }
            printf("\n");            
            printf("\nJOGADOR 1 venceu!\nColuna completa.\n");
            break;
           }
        
        // verificar colunas para jogador 2 
        if(((jogo[0][0]=='O') && (jogo[1][0]=='O') && (jogo[2][0]=='O')) ||
           ((jogo[0][1]=='O') && (jogo[1][1]=='O') && (jogo[2][1]=='O')) ||
           ((jogo[0][2]=='O') && (jogo[1][2]=='O') && (jogo[2][2]=='O'))) {
            for (i=0; i<40; i++) {
                printf("\n");
            }
            for (i=0; i<3; i++) {
                printf("  ");
                for (j=0; j<3; j++) {
                    printf(" %c ", jogo[i][j]);
                    if (j<2) {
                        printf(" |");
                    }
                }
                if (i<2) {
                    printf("\n  -----------------\n");
                }
            }
            printf("\n");
            printf("\nJOGADOR 2 venceu!\nColuna completa.\n");
            break;
           }        

        // verificar diagonais para jogador 1 
        if(((jogo[0][0]=='X') && (jogo[1][1]=='X') && (jogo[2][2]=='X')) ||
           ((jogo[0][2]=='X') && (jogo[1][1]=='X') && (jogo[2][0]=='X'))) {
            for (i=0; i<40; i++) {
                printf("\n");
            }
            for (i=0; i<3; i++) {
                printf("  ");
                for (j=0; j<3; j++) {
                    printf(" %c ", jogo[i][j]);
                    if (j<2) {
                        printf(" |");
                    }
                }
                if (i<2) {
                    printf("\n  -----------------\n");
                }
            }
            printf("\n");
            printf("\nJOGADOR 1 venceu!\nDiagonal completa.\n");
            break;
           }

        // verificar diagonais para jogador 2
        if(((jogo[0][0]=='O') && (jogo[1][1]=='O') && (jogo[2][2]=='O')) ||
           ((jogo[0][2]=='O') && (jogo[1][1]=='O') && (jogo[2][0]=='O'))) {
            for (i=0; i<40; i++) {
                printf("\n");
            }
            for (i=0; i<3; i++) {
                printf("  ");
                for (j=0; j<3; j++) {
                    printf(" %c ", jogo[i][j]);
                    if (j<2) {
                        printf(" |");
                    }
                }
                if (i<2) {
                    printf("\n  -----------------\n");
                }
            }
            printf("\n");
            printf("\nJOGADOR 1 venceu!\nDiagonal completa.\n");
            break;
           }
        
        // verificar empate
        partidas += 1;  
        if(partidas==9) {
            for (i=0; i<40; i++) {
                printf("\n");
            }
            for (i=0; i<3; i++) {
                printf("  ");
                for (j=0; j<3; j++) {
                    printf(" %c ", jogo[i][j]);
                    if (j<2) {
                        printf(" |");
                    }
                }
                if (i<2) {
                    printf("\n  -----------------\n");
                }
            }
            printf("\n");
            printf("\nEmpate!");
            break;
        }
    }
}
 