#include <stdio.h>

// FIZZBUZZ

/*
    Numero dividido por 3 E 5 ao mesmo tempo ( % 15 ) == FizzBuzz
    Numero dividido por 5 == Buzz
    Numero dividido por 3 == Fizz
    Numero dividido por nenhum dos 2 == numero no index
*/


void fizzBuzz(int numero){

    for(int i = 1; i <= numero; i++){

        if(i % 15 == 0)
        {printf("FizzBuzz");}

        else if(i % 5 == 0)
        {printf("Buzz");}

        else if(i % 3 == 0)
        {printf("Fizz");}

        else
        {printf("%d", i);}

        printf("\n");
    }
}


int main(void){

    int numero;

    printf("\n--- FIZZ BUZZ ---\n\n");

    // do loop para evitar o usuario de colocar 0 no index
    do{

        printf("Seu Index: ");
        scanf("%d", &numero);

        if(numero == 0)
        {printf("ERRO: Seu index nao pode comecar com zero\n");}

        else
        {fizzBuzz(numero);}

    } while(numero == 0);

    printf("\n-----------------");

    return 0;
}