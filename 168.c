#include<stdio.h>
struct automob
{
char ser[3];
int year,quant;
char material[10];
};
void main()
{struct automob parts[60];
int a,b,c,i,j,k;
for(a=0;a<60;a++)
{
    printf("enter serial no. year quantity material for ");fflush(stdin);
    gets(&parts[a].ser);
    scanf("%d %d %s",&parts[a].year,&parts[a].quant,&parts[a].material) ;
    }
  for(b=10;b<=25;b++)
   {
       printf("serial=%s year=%d quantity%d material=%s",parts[a].ser,parts[a].year,parts[a].quant,parts[a].material) ;
   }


}





