#include<stdio.h>
int add(int *,int *);
int sub(void);
int multi(void);
int main(int argc ,char **argv){
	int a,b;
	printf("Enter 1st value : ");
	scanf("%d",&a);
	printf("Enter 2st value : ");
	scanf("%d",&b);
	int *p,*q;
	p=&a;q=&b;
	printf("Addition is : %d\n",add(p,q));
	printf("Subtraction is : %d\n",sub());
	printf("Multiply is : %d\n",multi());
}
