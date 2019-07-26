#include<stdio.h>
int macmulti(int ,int );
int main(){
	int a,b;
	printf("Enter first number :- ");
	scanf("%d",&a);
	printf("Enter second number :- ");
	scanf("%d",&b);
	printf("  %d * %d = %d\n",a,b,macmulti(a,b));
}
