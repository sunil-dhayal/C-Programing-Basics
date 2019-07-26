#include<stdio.h>
main()
{
    int i,j,a[10];
    for(i=1;i<=10;i++)
    {
        printf("enter the extra working hour of %d employee\n",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=10;i++)
    {
        j=a[i]*12;
        printf("the overtime pay of %d employee is %d\n",i,j);

    }
}
