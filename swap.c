#include<stdio.h>
void exchange(int * ,int * );
int main(int argc, char **argv){
	int a,b;
    int *x,*y;
	printf("Enter value of a and b:");
	scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    exchange(x,y);
	printf("a:%d b:%d\n",*x,*y);
    return 0;
}	
