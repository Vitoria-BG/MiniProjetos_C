#include <stdio.h>
#include <stdlib.h> 

int main() {

    int i, n1, n2, operacao;

    do{
        
        // para organizar o terminal 
        printf("\n");

        // escolha da operação 
        printf("0 - Sair \n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n");
        scanf("%d", &operacao);

        // para organizar o terminal 
        for (i=0; i<11; i++) {
            printf("\n");
        }

        // escolha dos números
        if((operacao > 0) && (operacao < 5)) { 
            printf("Digite 2 valores:\n");
            scanf("%d%d", &n1, &n2);
        }

        // para organizar o terminal 
        for (i=0; i<11; i++) {
            printf("\n");
        }

        // operação 
        switch (operacao) {
        case 0: //sair
            printf("Saindo\n");
            break;
    
        case 1: //soma
            printf("%d + %d = %d \n", n1, n2, n1+n2);
            break;

        case 2: // subtração
            printf("%d - %d = %d \n", n1, n2, n1-n2);
            break;

        case 3: // multiplicação
            printf("%d x %d = %d \n", n1, n2, n1*n2);
            break;

        case 4: // divisão 
            while(n2==0) {
                printf("Não é possível dividir por 0. Digite outro número: ");
                scanf("%d", &n2);
            }
            printf("\n%d / %d = %.1f \n", n1, n2, n1/(float)n2); 
            break;
    
        default:
            printf("Opção inválida.\nEscolha uma operação:");
        }
    } while(operacao!=0);
}