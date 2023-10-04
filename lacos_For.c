#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int i;
	for(i=1;i<=100;i=i+1)
		if(i==60)
			continue;
		else
		if(i%2==1)
			continue;
		else
			printf("%2d\n",i);
		printf("FIM DO LACO");
	system("pause");
	return 0;
}
