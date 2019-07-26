#include<stdio.h>
#include<math.h>
void main()
{
	int p=500,r=10,t=5,CI;
	CI=p*pow((1+0.01*r),t);
	printf("CI=%d",CI);
	} 
