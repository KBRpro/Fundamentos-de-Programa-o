#include<stdio.h>

int main(void)
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b && b>c)
    printf("%d\n",b);
  if(a>b && c>b)
    printf("%d\n",c);
  if (b>a && a>c)
    printf("%d\n",a);
  if(b>a && c>a)
    printf("%d\n",c);
  if(c>a && a>b)
    printf("%d\n",a);
  if(c>a && b>a)
    printf("%d\n",b);
  return 0;
}
