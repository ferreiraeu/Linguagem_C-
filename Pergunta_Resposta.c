#include <stdio.h>
#include <stdlib.h>

int main(){
 int i;
 char nome[100];

 printf("Digite seu nome: \n");

 gets(nome);

 printf("Digite sua idade: ");
 scanf("%i", &i);

 if (i >= 18 )
 {
    printf("%s, você pode dirigir muleke DOIDOOO !!", nome);
 }
 else
 {
     printf("%s, você ainda tem que andar a pé kkk ", nome);
 }
 return 0;

}
