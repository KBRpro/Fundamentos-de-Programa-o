#define MAXL 1001
#include<stdio.h>
#include<string.h>
#include<math.h>

int rumo9s (int num)
{
	int soma = 0;
	if(num == 9)
	{
		return 1;
	}

	if(num % 9 == 0)				//Ex: Entra num = 999
	{
		while(num>0)				//Enquanto num > 0
		{
			soma = soma + (num%10);		//Ex: Opero com o numero >>> 0 = 0+(999%10);
			num = num/10;			// num = 999/10 = 99>> num = 99/10
		}
		return (1+rumo9s(soma));

	}
	else
	{
		return 0;

	}


}
int main (void)
{
	char str[MAXL];
	int tam, i, soma, total, j;

	while(scanf("%s",str) == 1 && str[0] != 48)
	{
		tam = strlen(str);
		soma = 0;
		i = 0;
		while(i < tam)
		{
			str[i] = str[i] - 48;
			soma = soma + str[i];
			i++;
		}
		printf("%d\n\n",soma);
		
		total = rumo9s(soma);

		if(total == 0)
		{
			for(j = 0; j < tam; j++)
			{
				printf("%d", str[j]);
			}
			printf(" is not a multiple of 9.\n");
		}
		else
		{
			for(j = 0 ; j< tam; j++)
			{
				printf("%d",str[j]);
			}
			printf(" is a multiple of 9 and has 9-degree %d.\n", total);
		}
	}

	return 0;
}
