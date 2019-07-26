#include<stdio.h>
main()
{
    int i,j,k;
    for(i=0;i<4;i++)
    {
       for(j=1;j<=4-i;j++)
       {printf("%d",j);
       }
       printf("\n");
    }

}
