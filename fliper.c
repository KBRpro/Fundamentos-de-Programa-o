#include<stdio.h>

int main(void)
{
  int portaA,portaB;
  scanf("%d %d",&portaA,&portaB);
  if(portaA==0)
    printf("C\n");
  else
  {
    if(portaB==0)
      printf("B\n");
    else if(portaB==1)
      printf("A\n");
  }
  return 0;
}
