/*area of a tingle if sides are given*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,At;
	printf("enter three sides of a tringle");
	scanf("%d%d%d",&a,&b,&c);
	s=(float)(a+b+c)/2;
	At=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
	printf("area of tringle is %f\n",At);
	return 0;	
}
