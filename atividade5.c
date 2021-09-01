/*Digite o exemplo anterior e verifique seu funcionamento;

Altere-o para que o usuário insira via teclado as duas strings e o caracter a ser
procurado nas buscas dentro das 2 strings informadas.
Inclua também nessa busca
dentro das strings a possibilidade do usuário fornecer parte de uma palavra (como
exemplo, você pode pensar em uma busca de nome parcial) */


#include <stdio.h>
#include <Stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
            setlocale(LC_ALL,"");

            const char string1[20];
            const char string2[20];
            char letra;
            char partpalavra;
            int x, cont1 = 0, cont2 = 0;

            //preenchimento das Strings
            printf("\nDigite uma palavra para primeira String: ");
            gets(string1);

            printf("\nDigite uma palavra para segunda String: ");
            gets(string2);

            //Contando a ocorrencia de "letra" nas strings

            printf("\nDigite o caracter que deseja encontrar nas palavras: ");
            scanf("%s", &letra);


            printf("\nDigite apenas uma parte da palavra para encontra-la: ");
            scanf("%s", &partpalavra);

            for (x = 0; x < strlen(string1); x++){
                if(string1[x] == letra) {
                    cont1++;
                }
            }
            for(x = 0; x < strlen(string2); x++){
                if(string2[x] == letra){
                    cont2++;
                }
            }

             partpalavra = stmcp(string1, string2);
              printf("\na palavra é: %s\n", partpalavra);

            printf("\n\nA letra \"%c\" aparece %d vez(es) na string 1,", letra, cont1);
            printf(" e %d vez(es) na string 2", cont2);
            printf("\n\n\n");



        printf("\n\n");
    system("pause");
return 0;

}
