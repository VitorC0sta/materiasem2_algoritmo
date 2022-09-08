#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //ponteiros.
    int a = 3;
    int b = 5;
    int *p, *q;
    p = &a; //[p] aponta para a variavel [a], ou seja ele armazena o endereço de [a].
    q = &b; //[q] aponta para a variavel [b], ou seja ele armazena o endereço de [b]. 

    *q = 18; //muda o valor guardado em 


    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", p); //aqui ele mostra o endereço de [a].
    printf("%d\n", q);
    printf("%d\n", *p); //mostra o valor de [a].
    printf("%d\n", *q);
    printf("%d\n", *p+6); //acrescenta ao valor qual aponta mais a soma.
    printf("%d\n", p+4); //acrescenta ao valor do endereço.


 return 0;
}