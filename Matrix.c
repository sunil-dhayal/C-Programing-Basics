#include<stdio.h>
#define SIZE 100
#define INF 9999999
int P[SIZE];
int M[SIZE][SIZE];
int S[SIZE][SIZE];
void Matrix(int );
void print(int ,int );
void main(){
	int i,j,n;
	printf("Enter number of matrices:");
	scanf("%d",&n);
	n=n+1;
	printf("Enter orders of matrices:");
	for(i=0;i<n;i++){
		scanf("%d",&P[i]);
	}
	Matrix(n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d       ",M[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d       ",S[i][j]);
		}
		printf("\n");
	}
	print(1,n-1);
}
void Matrix(int n){
	int i,l,j,k,q;
	for(i=1;i<=n;i++){
		M[i][i]=0;
	}
	for(l=2;l<=n-1;l++){
		for(i=1;i<=n-l+1;i++){
			j=i+l-1;
			M[i][j]=INF;
			for(k=i;k<=j-1;k++){
				q=M[i][k]+M[k+1][j]+P[i-1]*P[k]*P[j];
				if(q<M[i][j]){
					M[i][j]=q;
					S[i][j]=k;
				}
			}
		}
	}
}
void print(int i,int j){
	if(i==j){
		printf("A%d",i);
	}
	else{
		printf("(");
		print(i,S[i][j]);
		print(S[i][j]+1,j);
		printf(")");
	}
}
