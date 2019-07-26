#include<stdio.h>
main()
{
    int i,j,k,a=0;
    for(i=0;i<4;i++)
    {
       for(k=0;k<i;k++)
       {
           printf(" ");
       }
       for(j=1;j<=4-i;j++)
       {
           if(a!=9)
           printf("%d",a=a+1);
            else printf("0");

       }
        printf("\n");
    }

}
