#include<stdio.h>
#include<math.h>
void main()
{
int j,a,b[100][100],c[100][100],i;

printf("enter number ");
scanf("%d",&a);
for(j=0;j<1;j++)
{
for(i=1;a!=0;i++)
{b[i][j]=a%8;
a=a/8;
}
}
for(i=0;i<1;i++)
{
for(j=1;j<(i+1);j++)
{b[i][j]=c[j][i];
printf("%d",c[j][i]);
}
}

}
