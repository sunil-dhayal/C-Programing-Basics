/*addition of matrix*/

main()
{
int i,j,a,mat1[3][3]={1,0,0,0,1,0,0,0,1},mat2[3][3]={1,0,0,0,1,0,0,0,1};
int add[3][3];

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
    {add[i][j]=mat1[i][j]+mat2[i][j];
    }}

for(i=0;i<=2;i++)
{printf("\n");
for(j=0;j<=2;j++)
    {printf("%d ",add[i][j]);
    }}

return 0;}
