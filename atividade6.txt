/*Atividade 6 - Faça um programa que receba uma string do usuário (um pequeno texto), e conte
quantos espaços em branco o texto possui e exiba o resultado.
 Em seguida, elimine estes espaços em branco e imprima a string resultante. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


            char * remove_espacos( char * out, const char * in )
{
    const char * p = in;
    int i = 0;

    while( *p )
    {
        if( !isspace(*p) )
            out[i++] = *p;

        p++;
    }

    out[i] = 0;

    return out;
}


int main( int argc, char * argv[] )
{
    const char * entrada = "Um pequeno jabuti xereta viu dez cegonhas felizes.";
    char saida[ 100 ] = {0};
    int tamanho;
  
    remove_espacos( saida, entrada );

    tamanho = strlen(entrada);

    printf("Entrada: %s\n", entrada );
    printf("Saida: %s\n", saida );

    printf("Total de espaços restante : %d",tamanho)

    return 0;
}