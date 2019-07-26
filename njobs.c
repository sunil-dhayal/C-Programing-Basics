#include<stdio.h>
#include<stdlib.h>
#define INF 99999999
void assignment(int n, int A[][n],int assign[n],int *mincost,int agent,int cost);
int main(){
	int n;
	printf("Enter number of agents or jobs:");
	scanf("%d",&n);
	int A[n][n],assign[n],i,j,mincost=INF;
	printf("Enter cost table:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
		assign[i]=-1;
	}
	assignment(n,A,assign,&mincost,0,0);
	printf("Minimum cost:%d\n",mincost);
}
void assignment(int n, int A[][n],int assign[n],int *mincost,int agent,int cost){
	if(agent==n){
		*mincost = *mincost>cost?cost:(*mincost);
		return;
	}
	int i,j;
	for(i=0;i<n;i++){	
		int count=0;
		for(j=0;j<n;j++){
			if(assign[j]==i){
				count=1;
				break;
			}
		}
		if(count!=0){
			continue;
		}
		cost+=A[agent][i];
		assign[agent]=i;
		assignment(n,A,assign,mincost,agent+1,cost);
		assign[agent]=-1;
		cost-=A[agent][i];
	}
}
