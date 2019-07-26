#include <stdio.h>
int main ()
{
	int ch,n,grace;
	printf("Enter class as well as no. of subjects \n");
	scanf("%d%d",&ch,&n);
	switch(ch)
	{
		case 1:if(n>3)
		       printf("no grace");
		       if(n<=3)
		       {
		       	grace=n*5;
		       	printf("grace=%d",grace);
			   }
			   break;
		case 2:if(n>2)
		       printf("grace=%d",grace);
		       if(n<=2)
		       {
		       	grace=4*n;
		       	printf("grace=%d",grace);
			   }
			   break;
		case 3:if(n>1)
		       	printf("grace=%d",grace);
			   if(n==1)
			   {
			   	grace=5*n;
			   	printf("grace=%d",grace);
			   }
			   break;
		default:printf("invalid");	   
	}
	return 0;
}
