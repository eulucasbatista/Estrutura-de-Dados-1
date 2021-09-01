/*Atividade 4 - Codifique o programa matrizes 5 x 5, em todas as suas etapas
exemplificada anteriormente;

inclua uma rotina de impressão para visualização da matriz no console
(tela do terminal), que imprima em tela no formato de uma matriz, ou
seja, com linhas e colunas; */



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {


            setlocale(LC_ALL,"");

            // Declaração da matrix com 5 linhas e 5 colunas

            int mtrx[5][5], v[10];
            int i = 0, j = 0, soma = 0;

            for (i = 0; i < 5; i++){
                for (j = 0; j < 5; j++){
                    printf("Digite os valores da matriz na posição: %d e %d: ", i,j);
                    //efetua a leitura de todos os campos da matriz
                    scanf("%d", &mtrx[i][j]);
                }
            }

            /*Soma as linhas da matriz, percorre por todas as colunas através do "j" e por todas as lihas a através do "i". */
            printf("\n\nTotal por linha:\n\n");

            for (i = 0; i < 5; i++){
                for (j = 0; j < 5; j++){
                    soma = soma + mtrx[i][j];
                }
                printf("\nLinha %d: soma = %d\n", i + 1, soma);
                v[i] = soma;
                soma = 0;
            }
            /*Soma as colunas da matriz, percorre todas as linhas através do "i" e todas as colunas através do "j" */
            soma = 0;
            printf("\n\nTotal por coluna:\n\n");
            for (j = 0; j < 5; j++){
                for (i = 0; i < 5; i++){
                    soma = soma + mtrx[i][j];
                }
                printf("\nColuna %d : soma = %d\n", j + 1, soma);
                v[j + 5] = soma;
                soma = 0;
            }

            //totalização linhas e colunas
            for(i = 0; i < 5; i++){
                printf("\nOs valores da soma da linha %d são: %d\n", i + 1, v[i]);
                printf("\nOs valores da soma da coluna %d são: %d\n", i + 1, v[i + 5]);
            }

            // Exibindo a Matriz 5 x 5

            printf("\nExibindo o conteúdo da matrix preenchida: \n");

            for(i = 0; i < 5; i++){
                for(j = 0; j < 5; j++)
                    printf(" %d ", mtrx[i][j]);
                    printf("\n");
            }

        printf("\n\n");
    system("pause");
return 0;
}
