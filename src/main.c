#include <stdio.h>
#include <stdlib.h>

#include "soma_numeros_impares.h"

#define PROGRAM_TITLE " *** SOMA DE NUMEROS NATURAIS IMPARES ***"


int main(int argc, char *argv[]) {

    int iTotalImpar = 0, iInicial = 0, iFinal = 0;

    //show title
    printf(PROGRAM_TITLE);
    printf("\n \n");

    //request the range
    printf("Digite o numero inicial: ");
    scanf("%d", &iInicial);

    printf("Digite o numero final:   ");
    scanf("%d", &iFinal);
    printf("\n");

    iTotalImpar = somaNumerosImpares(iInicial, iFinal);

    printf("Total de numeros impares entre %d e %d = %d \n", iInicial, iFinal, iTotalImpar);
    printf("\n");

  system("PAUSE");
  return 0;
}
