#include<stdio.h>
void main()
{ int data[50],frequency[25],a,b,c;
    printf("enter data\n");
 for(a=0;a<=49;a++)
    scanf("%d",&data[a]);
 for(a=0;a<=24;a++)
    { for(b=0;b<=49;b++)
        { if(a+1==data[b])
            c++;
        }
    frequency[a]=c;c=0;
    }

    for(a=0;a<=24;a++)
    printf("\nfrequency of %d in  data is %d ",a+1,frequency[a+1]);



}
