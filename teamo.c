#include <stdio.h>

int main() {

  char nome[10];
  printf("Digite seu nome: ");
  scanf("%s",nome);
  printf("Oi %s! Eu te amo! \n", nome);
  printf("\n");

/* linha l, coluna c */
  int l, c;    

/* parte superior do coração */
  for (l=0; l<3; l++) {
    for (c=1; c<=17; c++) { 
      if ((c>=3-l && c<=6+l) || (c>=12-l && c<=15+l)) {    /* delimitando a curva do coração */
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");   /* pulando para começar a próxima linha */
  }

/* parte inferior do coração */
  for (l=0; l<9; l++) {
    for (c=1; c<=17; c++) {
      if (c>=1+l && c<=17-l) {    /* delimitando o formato da ponta do coração */
        printf("*");
      }
      else {
        printf(" ");
      }        
      }
      printf("\n");   /* pulando a linha para começar a próxima */
    }
  }



/*     3  6     12 15    */
/* 0    ****     ****     */
/* 1   ******   ******    */
/* 2  ******** ********   */

/* 0  *****************   */
/* 1   ***************    */
/* 2    *************     */
/*       ***********      */
/*        *********       */
/*         *******        */
/*          *****         */
/*           ***          */
/*            *           */
