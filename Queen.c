#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int N;
int solveNQUtil(int board[N][N], int col);
int isSafe(int board[N][N], int row, int col);
void printSolution(int board[N][N]);
void main() {
	printf("Enter value of N:");
	scanf("%d",&N);
    int board[N][N]; 
    memset(board, 0, sizeof(board)); 
  
    if (solveNQUtil(board, 0) == 0) { 
        printf("Solution does not exist"); 
        return ; 
    }
}

int solveNQUtil(int board[N][N], int col) { 
    if (col == N) { 
        printSolution(board); 
        return 1; 
    } 
    
    int res = 0;
	int i; 
    for (i = 0; i < N; i++) { 
        if ( isSafe(board, i, col) ) { 
            board[i][col] = 1; 
   
            res = solveNQUtil(board, col + 1) || res; 
            board[i][col] = 0;
        } 
    } 
    return res; 
}
int isSafe(int board[N][N], int row, int col) { 
    int i, j; 
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return 0; 
    for (i=row, j=col; i>=0 && j>=0; i--, j--) 
        if (board[i][j]) 
            return 0; 
    for (i=row, j=col; j>=0 && i<N; i++, j--) 
        if (board[i][j]) 
            return 0; 
  
    return 1; 
}
void printSolution(int board[N][N]) { 
    static int k = 1;
	int i,j;
    printf("%d-\n",k++); 
    for(i = 0; i < N; i++){ 
        for (j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
    printf("\n"); 
}
