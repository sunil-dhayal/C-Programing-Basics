#include<stdio.h>
#include<math.h>
main()
{ int a,b,c,d,e,f,g,arr[100];
printf("\nenter the number");
scanf("%d",&a);
for(b=1;b<100;b++)
{c=a%2;
a=a/2;
arr[b]=c;
if(a==1)
{arr[b+1]=1;e=b+1;break;}
}f=0;
for(g=e;g>=1;g--)
{f+=arr[g]*pow(10,g-1);}

printf("\n%d",f);return 0;
}
