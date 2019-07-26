#include<stdio.h>
int main()
{
	int I,J,N;
	printf(" Enter two integer I and J ,\n I should be greater than J ");
	scanf("%d %d",&I,&J);
	N=I+(J-(I%J));
	printf("\n The round off of the integer I to the next largest multiple of another integer J is %d",N);
	return 0;
}
