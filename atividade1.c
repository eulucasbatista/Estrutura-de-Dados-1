/*Atividade 1 - Lucas Batista
-> Escreva um programa em que o usuário insira um número
qualquer. Se o número digitado for um da tabela abaixo, o
programa deve retornar os caracteres indicados, senão, o
programa deve retornar o caractere 0 (zero). Utilize o comando
switch. Entregue no Moodle como atividade 1, somente arquivo fonte (.c). */

#include <stdio.h>
#include <stdlib.h>

        void main () {

                        int num;

                        printf("Digite um numero: ");
                        scanf("%d", &num);

                        //Inicio do Switch
                        switch (num){

                        case 1:
                            printf("\nA");
                            break;
                        case 2:
                            printf("\nB");
                            break;

                        case 3:
                            printf("\nC");
                            break;

                        case 4:
                            printf("\nD");
                            break;

                        default:
                            printf("\n0");
                        // Finalização do Switch exibindo o Caracter "0", caso o usuário difite um número diferente do

                        }


    printf("\n\n");
    system("pause");
    return 0;

    }
