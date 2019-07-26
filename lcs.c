#include<stdio.h>
#include<string.h>
char s[20],t[20];
int a[20][20],b[20][20],count=0;
void cost(int m,int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(s[i]==t[j]){
				a[i][j]=1+a[i-1][j-1];
				b[i][j]=2;
			}
			else{
				if(a[i-1][j]>=a[i][j-1]){
					b[i][j]=3;
					a[i][j]=a[i-1][j];
				}
				else{
					a[i][j]=a[i][j-1];
					b[i][j]=1;
				}
			}
		}
	}
}
void lcs(int m,int n){
	if(m==0 || n==0)
		return;
	if(b[m][n]==2){
		lcs(m-1,n-1);
		count++;
		printf("%c",s[m]);
	}
	else if(b[m][n]==3)
		lcs(m-1,n);
	else
		lcs(m,n-1);
}
int main(){
	int i,j,m,n;
	char c[20],d[20];
	printf("Enter first sequence :- ");
	scanf("%s",c);
	printf("Enter second sequence :- ");
	scanf("%s",d);
	m=strlen(c);
	n=strlen(d);
	for(i=0;i<m;i++)
		s[i+1]=c[i];
	
	for(i=0;i<n;i++)
		t[i+1]=d[i];
	for(i=0;i<=m;i++)
		for(j=0;j<=n;j++)
			if(i==0 || j==0)
				a[i][j]=0;
	cost(m,n);
	printf("\n\ncost table\n\n");
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n\nDirection table\n\n");
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	lcs(m,n);
	printf("\nlongest sequence lenght is %d\n",count);
}

