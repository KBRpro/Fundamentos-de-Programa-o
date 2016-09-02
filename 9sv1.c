 #include<stdio.h>
#include<string.h>

int somadigitos(int numero)
{
  if(numero<10)
    return numero;
  return ((numero%10) +somadigitos (numero/10));
}

int achargrau(int numero)
{
  if(numero==9)
    return 1;
  if(numero%9==0)
    return (somadigitos(numero)/9)+1;
  return 0;
}

int somastring(char stringX[],int tamanho)
{
  int soma;
  if(tamanho<0)
    return 48;//retorna 48 por ser a "base case" da string;
  soma = (stringX[tamanho]- '0') + somastring(stringX,tamanho-1);
  return soma;
  // O 48 marca o inicio dos numericos em uma string;
}

void imprimirstring(char stringX[],int tamanho)
{
  int i;
  for(i=0;i<tamanho;i++)
  {
    printf("%c",stringX[i]);
  }
}

int main(void)
{
  int grau,soma,tamanho,numero;
  char stringX[1001];
  while(scanf("%s",stringX)==1 && stringX[0]!=48)
  {
    tamanho=strlen(stringX);
    numero=somastring(stringX,tamanho);
    grau=achargrau(numero);
    if(grau==0)
    {
      imprimirstring(stringX,tamanho);
      printf(" not a multiple of 9\n");
    }
    else
    {
      imprimirstring(stringX,tamanho);
      printf(" is a multiple of 9 and has 9-degree %d\n",grau);
    }
  }
  return 0;
}
