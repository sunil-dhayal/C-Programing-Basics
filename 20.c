#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,r,q;
	printf("enter two co_ordinate");
	scanf("%f%f",&x,&y);
	r=sqrt(x*x+y*y);
	q=atan(y/x);
	printf("r is %f\n",r);
	printf("q is %f\n",q);
	}
	
