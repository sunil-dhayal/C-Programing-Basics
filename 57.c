#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,r,a,b,d;
	printf("enter coordinates of center and radius of the circle");
	scanf("%f%f%f",&x,&y,&r);
	printf("enter coordinates of  any point");
	scanf("%f%f",&a,&b);
	d=pow((x-a)*(x-a)+(y-b)*(y-b),0.5);
	if(d<r)
	printf("point lies inside the circle");
	else if(d==r)
	printf("point lies on the circle");
	 else if(d>r)
	printf("point lies outside the circle");
}
	

