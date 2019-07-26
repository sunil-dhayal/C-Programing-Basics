#include<stdio.h>
int main()
{
	int ram,shyam,ajay;
	printf("enter the age of ram shyam ajay");
	scanf("%d%d%d",&ram,&shyam,&ajay);
	if(ram<=shyam && ram<=ajay)
	{
		printf("ram is younger");
	}
	else if(shyam<=ram && shyam<=ajay)
	{
		printf("shyam is younger");
	}
	else
	{
		printf("ajay is younger");
	}
	return 0;
}
