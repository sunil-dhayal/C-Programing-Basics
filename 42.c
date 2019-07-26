#include <stdio.h>
int main ()
{
	float a,b,c;
	printf("Enter the three sides of the triangle \n");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b)
	{
	 if(a==b&&b==c&&c==a)
	 {
		printf("Triangle is equilateral \n");
	 } 
	 else if(a==b||b==c||c==a)
	 {
		printf("Triangle is isosceles \n");
	 }
	 if(a!=b&&b!=c&&c!=a)
	 {
		printf("Triangle is scalene \n");
     }
     if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
     {
    	printf("Triangle is right angled \n");
	 }
    }
    else
    {
    	printf("Triangle is not valid \n");
	}
    return 0;
}
