#include <stdio.h>
int main(){
/* regras controlar 3 peças
 torre: mova a torre 5 casas sentido frente  usando laço for
 bispo: mova o Bispo 5 casas sentido diagonal frente usando laço  while
 rainha: mova o Rainha 8 casas sentido esquerda usando laço  do while
  */

  int i, j;

  printf("***XADRES***\n");
  printf("Movendo a TORRE \n");

  for (i = 1; i <= 5; i++) {
      printf("FRENTE\n");
  }

  i = 1; // Reinicializa i para o loop do bispo
  printf("Movendo o BISPO\n"); 

  while (i <= 5) {
      printf("FRENTE E DIREITA\n"); // Movendo o Bispo em diagonal sentido frente direita 5 casas.
      i++;
  }
  
  i = 1; // Reinicializa i para o loop da Rainha
  printf("Movendo a Rainha\n");

  do {
      printf("ESQUERDA\n");
      i++;
  } while (i <= 8); // Movendo a Rainha 8 casas para esquerda.

  printf("Movendo o CAVALO \n"); // APARTIR DA LINHA 34 ESTA SENDO INCLUIDO O MOVIMENTO DO CAVALO.

  for (i = 1; i <= 2; i++) { // Loop externo do cavalo
      for (j = 1; j <= 1; j++) { // Loop interno do cavalo
          printf("CIMA \n"); // A cada teste do loop, o cavalo anda para frente
      }
  }
  printf("DIREITA \n"); // No final, o cavalo vira para direita
  
  return 0;
}