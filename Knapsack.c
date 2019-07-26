#include<stdio.h>
#define SIZE 100
int weight[SIZE];
int price[SIZE];
int Profit[SIZE][SIZE];
void knapsack(int ,int );
void solution(int ,int );
void main(){
	int i,j,n,W;
	printf("Enter number of items:");
	scanf("%d",&n);
	printf("Enter size of knapsack:");
	scanf("%d",&W);
	printf("Enter weight and profit of items:");
	for(i=1;i<=n;i++){
		scanf("%d",&weight[i]);
		scanf("%d",&price[i]);
	}
	knapsack(n,W);
	for(i=0;i<=n;i++){
		for(j=0;j<=W;j++){
			printf("%d ",Profit[i][j]);
		}
		printf("\n");
	}
	solution(n,W);
}
void knapsack(int n,int W){
	int w,i;
	for(w=0;w<=W;w++){
		Profit[0][w]=0;
	}
	for(i=1;i<=n;i++){
		Profit[i][0]=0;
	}
	for(i=1;i<=n;i++){
		for(w=1;w<=W;w++){
			if(weight[i]<=w){
				if(price[i]+Profit[i-1][w-weight[i]]>Profit[i-1][w]){
					Profit[i][w]=Profit[i-1][w-weight[i]]+price[i];
				}
				else{
					Profit[i][w]=Profit[i-1][w];
				}
			}
			else{
				Profit[i][w]=Profit[i-1][w];
			}
		}
	}
}
void solution(int n,int W){
	int i,w;
	i=n;
	w=W;
	while(i>0 && w>0){
		if(Profit[i][w]==Profit[i-1][w]){
			printf("Item %d is not included in knapsack\n",i);
			i=i-1;
		}
		else{
			printf("Item %d is included in knapsack\n",i);
			w=w-weight[i];
			i=i-1;
		}
	}
}
