#include<stdio.h>
void main()
{
	float km,meter,cm,feet,inch;
	print("enter distance between two cities in km \n");
	scanf("%f",&km);
	meter=1000*km;
	cm=1000000*km;
	feet=1/3380*km;
	inch=(1/12)*(1/3380)*km;
	printf("meter is %f\n",meter);
	printf("cm is %f\n", cm);
	printf("feet is %f\n",feet);
	printf("inch is %f\n",inch);
	}
	
