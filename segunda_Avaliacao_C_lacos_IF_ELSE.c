#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int idade, soma, cont, resp, menor, maior, media;
	soma = 0;
	cont = 0;
	resp = 1;
	maior = 0;
	menor = 0;
	idade = 0;
	printf("==================================");
	printf("\nPrograma Calculo Prova\n");
	printf("==================================");
	do{
	printf("\n -Digite o valor da IDADE: ");
	scanf("%d",&idade);
	
		if (idade==1)
		menor = idade;
		else if (idade > maior)
		maior = idade;
		else if (idade < menor)
		menor = idade;
		soma = soma + idade;
		cont = cont + 1;
		printf("\n Para retornar ao inicio digite [1] para continuar digite [0]: ");
		scanf("%d",&resp);
	}
		while (resp==1);
		media = (soma/cont);
		printf("\nValor da SOMA: %d",soma);
		printf("\nValor MAIOR: %d",maior);
		printf("\nValor MENOR: %d",menor);
		printf("\nValor MEDIA: %d\n\n",media);
		printf("\n\n========================================");
		printf("\n\nFIM DO PROGRAMA NOTA DEZ - SELO ROSICA APROVADO");
		printf("\n\n========================================\n\n");
	system("pause");
	return 0;
	
}
