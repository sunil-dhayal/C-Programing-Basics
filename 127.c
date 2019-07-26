#include<stdio.h>

/*same sequence as given in example*/
void main()
{ int arr[25],a,b,c,d1[24],d2[23],d3[22];
    for(a=0;a<=24;a++)
    { arr[a]=.5*(a+1)*(a+1)-.5*(a+1)+1;
    }

    for(a=0;a<=23;a++)
    d1[a]=arr[a+1]-arr[a];
    for(a=0;a<=22;a++)
    d2[a]=d1[a+1]-d1[a];
    for(a=0;a<=21;a++)
    d3[a]=d2[a+1]-d2[a];


     printf("\n");
                             for(a=0;a<=24;a++)
    printf("%d ",arr[a]);
    printf("\n");            for(a=0;a<=23;a++)
    printf("%d ",d1[a]);
    printf("\n");            for(a=0;a<=22;a++)
    printf("%d ",d2[a]);
    printf("\n");            for(a=0;a<=21;a++)
    printf("%d ",d3[a]);

}
