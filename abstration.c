#include <stdio.h>
#include <stdlib.h>

int get_positive_int(void); // Prototype , sabemos que essa função vai ser usada.

int main(void)
{
     int i = get_positive_int();
     printf("%i\n", i);
}
// Solicita um número inteiro positivo ao usuário
int get_positive_int(void)
    {
     int n;
     do
     {
          n = scanf("Número positivo: \n"); // Foi declarada dentro do escopo, assim não pode ser lido no escopo global, para resolver  declaramos ela logo acima com (int n;).
	 }
     while(n < 1); // caso eu não imprima o numero positivo , ele vai pergutar ate que informe a condição desejada.
     return n;
}