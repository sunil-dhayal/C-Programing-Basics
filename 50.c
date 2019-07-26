#include <stdio.h>
int main ()
{
	float h,c,t;
	printf("Enter the hardness of the steel \n");
	scanf("%f",&h);
	printf("Enter the carbon content of the steel \n");
	scanf("%f",&c);
	printf("Enter the tensile strength of the steel \n");
	scanf("%f",&t);
	if(h>50&&c>0.7&&t>5600)
	{
		printf("Grade of the steel is 10 \n");
    }
    else if(h>50&&c>0.7)
    {
        printf("Grade of the steel is 9 \n");	
	}
	else if(c>0.7&&t>5600)
	{
		printf("Grade of the steel is 8 \n");
	}
	else if(h>50&&t>5600)
	{
		printf("Grade of the steel is 7 \n");
	}
	else if(h>50||c>0.7||t>5600)
	{
		printf("Grade of the steel is 6 \n");
	}
	else
	{
		printf("Grade of the steel is 5 \n");
	}
	return 0;
}
