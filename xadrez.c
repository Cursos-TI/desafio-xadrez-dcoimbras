#include <stdio.h>
int main(){
/* regras controlar 3 peças
 torre: mova a torre 5 casas sentido frente  usando laço for
 bispo: mova o Bispo 5 casas sentido diagonal frente usando laço  while
 rainha: mova o Rainha 8 casas sentido esquerda usando laço  do while
  */

 int i =1;

printf("***XADRES***\n");
printf("Movendo a TORRE \n");

    for (int i = 1; i <=5; i++) // Estamos movendo a torre para frente  5 casas.
    {
    printf("FRENTE\n");
    }

printf("Movendo o BISPO\n"); 

    while (i <=5)
    {
    printf("FRENTE E DIREITA\n"); // Estamos movendo o Bisbo  em diagonal sentido frente direita  5 casas.
    i++;
    }
    

i=1;
printf("Movendo a Rainha\n");

do{
    printf("ESQUERDA\n");
    i++;
  } while (i <=8); // Estamos movendo a Rainha 8 casas para esquerda.

    return 0;
}
