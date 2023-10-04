#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float A, B, C;
	printf("\nEXERCICIO TRIANGULO ROSICA");
	printf("\n_____________________________");
	
	printf("\n\nDigite o valor do lado A: ");
	scanf("%f",&A);
	printf("\nDigite o valor do lado B: ");
	scanf("%f",&B);
	printf("\nDigite o valor do lado C: ");
	scanf("%f",&C);
		if (A<B+C&&B<A+C&&C<A+B){
		
	 	if ( (A==B) && (B==C))
		printf("\nO triangulo sera Equilatero \n",A,B,C);
		else if ((A!=B)&&(A!=C)&&(B!=C))
		printf("\nO triangulo sera Escaleno \n",A,B,C);
		else if ((A==B)||(A==C)||(C==A))
		printf("\nO triangulo sera Isosceles \n",A,B,C);
	}
		else
		printf("\nNAO SERA UM TRIANGULO\n",A,B,C);

		printf("\n\n________FIM__________\n");
		printf("\n\nPROGRAMA DO TAVINHO");
	getch();
}
