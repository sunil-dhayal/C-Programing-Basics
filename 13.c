#include<stdio.h>
int main()
{
	int Pt;
	float ILLt,ILLm,ILLw;
	Pt=80000;
	ILLt=ILLm+ILLw;
	ILLm=80000*0.52*0.65;
	ILLw=80000*0.48*0.87;	
	printf("ILLITERATE MEN is %f",ILLm);
	printf("ILLITERATE WOMEN is %f",ILLw);
	printf("TOTAL ILLERATE POPULATION IS %F",ILLt);
	return 0;
}
