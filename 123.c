/*multiplication of matrix*/

main()
{
int i,j,a,mat1[3][3]={1,0,0,0,1,0,0,0,1},mat2[3][3]={1,0,0,0,1,0,0,0,1};
int mul[3][3]={0},b[1][1]={0};

for(i=0;i<=2;i++)
{printf("\n");

    for(j=0;j<=2;j++)
    {mul[i][j]=b[1][1];

        for(a=0;a<=2;a++)
    {
        mul[i][j]+=mat1[i][a]*mat2[a][j];
    }
        printf("%d ",mul[i][j]);
    }





}return 0;}
