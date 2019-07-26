#include<stdio.h>
void main()
{
	int d1,m1,y1,d2,m2,y2,y,n,i;
	printf("Enter Date 1 in dd/mm/yyyy format:");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("Enter Date 2 in dd/mm/yyyy format:");
	scanf("%d%d%d",&d2,&m2,&y2);
	
	if(y1!=y2)
	{
		y=y2-y1+1;
		n=365*y;
		switch(m1)
		{
			case 12:n=n-31;
			case 11:n=n-30;
			case 10:n=n-31;
			case 9:n=n-30;
			case 8:n=n-31;
			case 7:n=n-31;
			case 6:n=n-30;
			case 5:n=n-31;
			case 4:n=n-30;
			case 3:n=n-31;
			case 2:n=n-28;
			case 1:{n=n-31;
				break;
			}
		}	
		
		switch(m1)
		{
			case 12:{n=n+31-d1;
				break;
			}
			case 11:{n=n+30-d1;
				break;
			}
			case 10:{n=n+31-d1;
				break;
			}
			case 9:{n=n+30-d1;
				break;
			}
			case 8:{n=n+31-d1;
				break;
			}
			case 7:{n=n+31-d1;
				break;
			}
			case 6:{n=n+30-d1;
				break;
			}
			case 5:{n=n+31-d1;
				break;
			}
			case 4:{n=n+30-d1;
				break;
			}
			case 3:{n=n+31-d1;
				break;
			}
			case 2:{n=n+28-d1;
				break;
			}
			case 1:{n=n+31-d1;
				break;
			}
					
		}
		switch(m2)
		{
			case 1:n=n-31;
			case 2:n=n-28;
			case 3:n=n-31;
			case 4:n=n-30;
			case 5:n=n-31;
			case 6:n=n-30;
			case 7:n=n-31;
			case 8:n=n-31;
			case 9:n=n-30;
			case 10:n=n-31;
			case 11:n=n-30;
			case 12:{n=n-31;
				break;
			}
		}
		
		switch(m2)
		{
			case 1:{n=n+d2;
				break;
			}
			case 2:{n=n+d2;
				break;
			}
			case 3:{n=n+d2;
				break;
			}
			case 4:{n=n+d2;
				break;
			}
			case 5:{n=n+d2;
				break;
			}
			case 6:{n=n+d2;
				break;
			}
			case 7:{n=n+d2;
				break;
			}
			case 8:{n=n+d2;
				break;
			}
			case 9:{n=n+d2;
				break;
			}
			case 10:{n=n+d2;
				break;
			}
			case 11:{n=n+d2;
				break;
			}
			case 12:{n=n+d2;
				break;
			}
		}
		for(i=y1;i<=y2;i++)
		{
			if(i%4==0)
			{
				if(i%100!=0)
				{
					if(i==y1)
					{
						if((m1==1) || (m1==2))
						{
							n=n+1;
						}
					}
					else if(i==y2)
					{
						if(((m2==2) && (d2==29)) || (m2>2))
						{
							n=n+1;
						}
					}
					else if((i<y2) && (i>y1))
					{
						n=n+1;
					}	
				}
				else if(i%100==0)
				{
					if(i%400==0)
					{
						if(i==y1)
						{
							if((m1==1) || (m1==2))
							{
								n=n+1;
							}
						}
						else if(i==y2)
						{
							if(((m2==2) && (d2==29)) || (m2>2))
							{
								n=n+1;
							}
						}
						else if((i<y2) && (i>y1))
						{
							n=n+1;
						}
					}
				}
			}
		}
	printf("Number of days:%d\n",n);
	printf("Number of weeks:%d\n",n/7);
	printf("Number of days not got evened out into weeks:%d",n%7);
	}
	
	
	
	
	else if(y1==y2)
	{
		if(y1%4==0)
		{
			if(y1%100!=0)
			{
				n=366;
			}
			else if(y1%100==0)
			{
				if(y1%400==0)
				{
					n=366;
				}
			}
		}
		else{
			n=365;
		}
		switch(m1)
		{
			case 12:n=n-31;
			case 11:n=n-30;
			case 10:n=n-31;
			case 9:n=n-30;
			case 8:n=n-31;
			case 7:n=n-31;
			case 6:n=n-30;
			case 5:n=n-31;
			case 4:n=n-30;
			case 3:n=n-31;
			case 2:n=n-28;
			case 1:{n=n-31;
				break;
			}
		}	
		
		switch(m1)
		{
			case 12:{n=n+31-d1;
				break;
			}
			case 11:{n=n+30-d1;
				break;
			}
			case 10:{n=n+31-d1;
				break;
			}
			case 9:{n=n+30-d1;
				break;
			}
			case 8:{n=n+31-d1;
				break;
			}
			case 7:{n=n+31-d1;
				break;
			}
			case 6:{n=n+30-d1;
				break;
			}
			case 5:{n=n+31-d1;
				break;
			}
			case 4:{n=n+30-d1;
				break;
			}
			case 3:{n=n+31-d1;
				break;
			}
			case 2:{n=n+28-d1;
				break;
			}
			case 1:{n=n+31-d1;
				break;
			}
					
		}
		switch(m2)
		{
			case 1:n=n-31;
			case 2:n=n-28;
			case 3:n=n-31;
			case 4:n=n-30;
			case 5:n=n-31;
			case 6:n=n-30;
			case 7:n=n-31;
			case 8:n=n-31;
			case 9:n=n-30;
			case 10:n=n-31;
			case 11:n=n-30;
			case 12:{n=n-31;
				break;
			}
		}
		
		switch(m2)
		{
			case 1:{n=n+d2;
				break;
			}
			case 2:{n=n+d2;
				break;
			}
			case 3:{n=n+d2;
				break;
			}
			case 4:{n=n+d2;
				break;
			}
			case 5:{n=n+d2;
				break;
			}
			case 6:{n=n+d2;
				break;
			}
			case 7:{n=n+d2;
				break;
			}
			case 8:{n=n+d2;
				break;
			}
			case 9:{n=n+d2;
				break;
			}
			case 10:{n=n+d2;
				break;
			}
			case 11:{n=n+d2;
				break;
			}
			case 12:{n=n+d2;
				break;
			}
		}	
	printf("Number of days:%d\n",n);
	printf("Number of weeks:%d\n",n/7);
	printf("Number of days not got evened out into weeks:%d",n%7);
	}
}	


