#include<stdio.h>
main()
{
    int i,j,k,a;
    printf("enter a no, ");
    scanf("%d",&a);
    if(a%2==0)
    {
       for(i=0;i<4;i++)
       {
           for(j=0;j<=i;j++)
           {
               printf("*");
           }
           printf("\n");
       }
       for(i=0;i<4;i++)
       {

           for(j=0;j<4-i;j++)
           {
               printf("*");
           }
           printf("\n");
       }
    }
    else
    {
        for(i=0;i<4;i++)
       {
           for(j=0;j<=i;j++)
           {
               printf("*");
           }
           printf("\n");
       }
       for(i=0;i<4;i++)
       {

           for(j=0;j<3-i;j++)
           {
               printf("*");
           }
           printf("\n");
       }
    }


}
