#include <stdio.h>
#include <stdlib.h>

main( )
{
 int A, B, R, RESP = 1;
 do
 {
 printf("\n\nEntre um valor para A: "); scanf("%d", &A);
 printf("Entre um valor para B: "); scanf("%d", &B);
 R = A + B;
 printf("\nO resultado corresponde a: %d", R);
 printf("\n\nDeseja continuar?");
 printf("\nTecle [1] para SIM / [0] para NAO: ");
 scanf("%d", &RESP);
 }
 while (RESP == 1);
 return(0);
 system("pause");
}
 
