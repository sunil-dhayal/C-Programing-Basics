#include<stdio.h>
int main()
{
    int i,j,k=1;
        	for(i=1;i<=4;i++)
        	{
        		for(j=1;j<=4;j++)
        		{
        		if(j>=i && k<=9)
        		{
        		printf("%d",k);
        		k++;}
				else if(j>=4 && k==10)
				{
				k=0;
				printf("%d",k);
				k++;
				}
			else
          printf(" ");
		  
		  }
          printf("\n");
		  }
          
    }

