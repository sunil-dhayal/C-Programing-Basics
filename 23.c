#include<stdio.h>
int main()
{
	int CP,SP,profit,loss;
	printf("enter CP and SP");
	scanf("%d%d",&CP,&SP);
	if(CP<SP)
	{
	printf("SELLER made profit");
	profit=SP-CP;
	printf("profit is %d\n",profit);
	}
	else
	{
	printf("SELLER incurred loss");
	loss=CP-SP;
	printf("loss is %d\n",loss);
	}
	return 0;
}
