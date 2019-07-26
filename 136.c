
main()
{
int i,j,a,mat1[3][3]={1,0,0,0,1,0,0,0,1},mat2[3][3]={1,0,0,0,1,0,0,0,1};
int add[3][3],subs[3][3];
printf("1.ADDITION\n2.SUBSTRACTION");
scanf("%d",&a);
switch(a)
{case 1:
{for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
    {add[i][j]=mat1[i][j]+mat2[i][j];
    }}

for(i=0;i<=2;i++)
{printf("\n");
for(j=0;j<=2;j++)
    {printf("%d ",add[i][j]);
    }}} break;
case 2:
 {for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
    {subs[i][j]=mat1[i][j]-mat2[i][j];
    }}

for(i=0;i<=2;i++)
{printf("\n");
for(j=0;j<=2;j++)
    {printf("%d ",subs[i][j]);
    }}} break;






}
return 0;
}


