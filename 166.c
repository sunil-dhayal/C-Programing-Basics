#include<stdio.h>
struct student
{int rollno,year;  char name[20],department[20],course[20];

};

void main()
{ struct student s[5];int i;
for(i=0;i<=4;i++)
{ printf("enter roll no Year of joining Name Department Course of student %d",i+1);
  scanf("%d",&s[i].rollno);
  scanf("%d",&s[i].year);
  fflush(stdin);
    gets(s[i].name);
    gets(s[i].department);
    gets(s[i].course);

    }

  int c,a,b,d;
  printf("\n 1). ACCORDING TO YEAR\n2). ACCORDING TO ROLL NUMBER");
   scanf("%d",&c);
 switch(c)
 {case 1:{printf("enter the year\n");
   scanf("%d",&a);
   for(d=0;d<=4;d++)
    {if(a==s[d].year)
     printf("\n%d %d %s %s %s",s[d].rollno,s[d].year,s[d].name,s[d].department,s[d].course);
    }

 } break;
  case 2:{printf("enter the roll no\n");
   scanf("%d",&a);

   for(d=0;d<=4;d++)
    {if(a==s[d].rollno)
     printf("\n%d %d %s %s %s",s[d].rollno,s[d].year,s[d].name,s[d].department,s[d].course);
    }
}break;}}
