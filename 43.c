#include <stdio.h>
int main ()
{
	float t;
	printf("Enter the time required for worker to complete the work \n");
	scanf("%f",&t);
	if(t>=2&&t<=3)
	{
		printf("Worker is highly efficient \n");
	}
	else if(t>=3&&t<=4)
	{
		printf("Worker is ordered to improve the speed \n");
	}
	else if(t>=4&&t<=5)
	{
		printf("Worker need training to improve speed \n");
	}
	else if(t>5)
	{
		printf("Worker has to leave the company \n");
	}
	return 0;
}
