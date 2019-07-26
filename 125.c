/*quite long*/
#include<stdio.h>
void main()
{ int arr[4][4]={15,1,14,13,7,6,12,16,2,9,3,5,4,10,8,11},p,q,r=0;
int sim[16];
for(p=0;p<=3;p++)
  {for(q=0;q<=3;q++)
   {sim[r]=arr[p][q];r++;}
  }
  bubble_sort(sim,16);
r=0;
  for(p=0;p<=3;p++)
  {for(q=0;q<=3;q++)
   {arr[p][q]=sim[r];r++;
  }}
  for(p=0;p<=3;p++)
  {printf("\n");
  for(q=0;q<=3;q++)
  printf("%d ",arr[p][q]);
  }

}
bubble_sort(int sim[],int N)
{ int R,C,temp,time;
      for(R=1;R<=N-1;R++)
      { time=0;
        for(C=0;C<=N-1-R;C++)
      {  if(sim[C]>sim[C+1])
          {temp=sim[C];
          sim[C]=sim[C+1];
          sim[C+1]=temp; time=1;}

      }

if(time==0){break;}

      }



}
