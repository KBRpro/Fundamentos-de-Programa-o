#include<stdio.h>
#include<math.h>

int main(void)
{
	int tamanho,teste,resultado;
	teste=1;
	while(scanf("%d",&tamanho)==1 && tamanho!=0)
	{
		resultado=pow(2,tamanho)-1;
		printf("Teste %d\n",teste);
		printf("%d\n\n",resultado);
		teste++;
	}
	return 0;
}
