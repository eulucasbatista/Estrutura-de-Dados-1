/* Atividade 3 - Codifique o programa dos 2 vetores exemplificado anteriormente e teste
seu funcionamento;

Imprima os vetores em linhas separadas e identifique os, em seguida
exiba as posições em que possuem valores comuns ou se não possuem;

*/

#include <stdio.h>
#include <stdlib.h>


void main () {
                // Declaração dos vetores com 5 posições:
                int v1[5], v2[5];
                int i = 0, j = 0;

                //preenchendo vetor 1
                for (i = 0; i < 5; i++){
                    printf("\nInforme o valor do elemento %d do vetor 1:  ", i + 1);
                    // Leitura e inserção do valor em cada posição do vetor:
                    scanf("%d", &v1[i]);
                }

                //preenchendo vetor 2
                for (j = 0; j < 5; j++){
                    printf("\nInforme o valor do elemento %d do vetor 2: ", j + 1);
                    // Leitura a inserção do valor em cada posição do vetor:
                    scanf("%d", &v2[j]);
                }

                for (i = 0; i < 5; i++){
                    for (j = 0; j < 5; j++){
                        // exibindo valores que são comuns aos dois vetores:
                        if(v1[i] == v2[j]){
                            printf("\nValores iguais na posicao> %d e %d\n", i + 1, j + 1);
                        }
                         // exibindo valores que são diferentes aos dois vetores:
                        else if((v1[i] != v2[j]) || (v2[i] != v1[j])){
                            printf("\nValores diferentes na posicao> %d e %d\n", i + 1, j + 1);
                        }
                    }
                }
                         printf("\nVetor 1\n");

                         printf("\nvalor [%d] \n", v1[0]);
                         printf("valor [%d] \n", v1[1]);
                         printf("valor [%d] \n", v1[2]);
                         printf("valor [%d] \n", v1[3]);
                         printf("valor [%d] \n", v1[4]);

                         printf("\nVetor 2\n");

                         printf("\nvalor [%d] \n", v2[0]);
                         printf("valor [%d] \n", v2[1]);
                         printf("valor [%d] \n", v2[2]);
                         printf("valor [%d] \n", v2[3]);
                         printf("valor [%d] \n", v2[4]);

           printf("\n\n");
        system("pause");
    return 0;
}
