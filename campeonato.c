#include<stdio.h>

int main(void)
{
  int cv,ce,cs,fv,fe,fs;
  int pc,pf;
  scanf("%d %d %d %d %d %d",&cv,&ce,&cs,&fv,&fe,&fs);
  pc=(3*cv)+ce;
  pf=(3*fv)+fe;
    if(pf==pc)
    {
      if(cs==fs)
        printf("=\n");
      else if(cs>fs)
        printf("C\n");
      else if(cs<fs)
        printf("F\n");
    }
    if(pc>pf)
      printf("C\n");
    if(pc<pf)
      printf("F\n");
    return 0;
}
