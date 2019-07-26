#include <stdio.h>
int main ()
{
	int a,b;
	printf("Enter the marks of subject A \n");
	scanf("%d",&a);
	printf("Enter the marks of subject B \n");
	scanf("%d",&b);
	if(a>=55&&b>=45)
	{
		printf("Student is qualified for a degree with A as the main subject and B as the subsidiary subject \n");
	}
	else if(a>=45&&a<55&&b>=55)
	{
		printf("Student is qualified for a degree with A as the main subject and B as the subsidiary subject \n");
	}
	else if(a>=65&&b<45)
	{
		printf("Student has to reappear in an exam in B to qualify it \n");
	}
	else
	{
		printf("Student is failed \n");
    }
	return 0;
}
