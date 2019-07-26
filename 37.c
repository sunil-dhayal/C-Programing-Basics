#include <stdio.h>
int main ()
{
	int m1,m2,m3,m4,m5,a,b,c,d,e;
	float p1,p2,p3,p4,p5,t;
	printf("Enter maximum marks of 1st paper \n");
	scanf("%d",&m1);
	printf("Enter maximum marks of 2nd paper \n");
	scanf("%d",&m2);
	printf("Enter maximum marks of 3rd paper \n");
	scanf("%d",&m3);
	printf("Enter maximum marks of 4th paper \n");
	scanf("%d",&m4);
	printf("Enter maximum marks of 5th paper \n");
	scanf("%d",&m5);
	printf("Enter marks of 1st paper \n");
	scanf("%d",&a);
	printf("Enter marks of 2nd paper \n");
	scanf("%d",&b);
	printf("Enter marks of 3rd paper \n");
	scanf("%d",&c);
	printf("Enter marks of 4th paper \n");
	scanf("%d",&d);
	printf("Enter marks of 5th paper \n");
	scanf("%d",&e);
	p1=((a*1.0)/m1)*100.0;
	p2=((b*1.0)/m2)*100.0;
	p3=((c*1.0)/m3)*100.0;
	p4=((d*1.0)/m4)*100.0;
	p5=((e*1.0)/m5)*100.0;
	t=(((a+b+c+d+e)*1.0)/(m1+m2+m3+m4+m5))*100.0;
	if((p1<40&&p2<40)||(p1<40&&p3<40)||(p1<40&&p4<40)||(p1<40&&p5<40)||(p2<40&&p3<40)||(p2<40&&p4<40)||(p2<40&&p5<40)||(p3<40&&p4<40)&&(p3<40&&p5<40)||(p4<40&&p5<40))
	{
		printf("Result is fail \n");
	}
	else if(p1<40||p2<40||p3<40||p4<40||p5<40)
	{
		printf("Result is due \n");
	}
	else if(t<33)
	{
		printf("Result is fail \n");
	}
	else if(t>=33&&t<=45)
	{
		printf("Result is third division \n");
	}
	else if(t>=45&&t<=60)
	{
		printf("Result is second division \n");
	}
	else if(t>=60&&t<=70)
	{
		printf("Result is first division \n");
	}
	else if(t>70)
	{
		printf("PASS With Honours \n");
	}
	return 0;
}
