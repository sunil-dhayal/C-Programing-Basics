#include<stdio.h>
main()
{
int i=1,j=1,k=1;
for(;i<=3;i++)
{
    for(;j<=3;j++)
    {
        for(;k<=3;k++)
            printf("%d%d%d\n",i,j,k);
    }
}
}
