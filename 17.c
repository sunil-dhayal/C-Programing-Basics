#include<stdio.h>
void main()
{
	float a=1089,b=841,c;
	int i=0;
	while(i<8)
	{
	a=a/2;
	c=a;
	a=b;
	b=c;
	printf("\n a=%f b=%f",a,b);
	i++;
	}
	}
	
	
