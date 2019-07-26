#include<stdio.h>
void jump(int *);
int main(int argc ,char **argv){
	int a;
	int *b;
	printf("Enter a number : ");
	scanf("%d",&a);
	b=&a;
	jump(b);
	return 0;
}
