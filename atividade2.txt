/*Atividade 1 - Lucas Batista
Reescreva o programa anterior utilizando if-else-if. */

#include <stdlib.h>
#include <stdio.h>


void main () {

                int num;

                printf("Digite um numero: ");
                scanf("%d", &num);

                //Inicio da estrutura de repetição
                if (num == 1) {
                    printf("\n A");
                }
                    else if( num == 2){
                    printf("\n B");
                }

                else if( num == 3){
                printf("\n C");

                }

                    else if( num == 4){
                    printf("\n D");

                }

                else {
                    printf("\n 0");
                } //fim

    printf("\n\n");
    system ("pause");
    return 0;
}
