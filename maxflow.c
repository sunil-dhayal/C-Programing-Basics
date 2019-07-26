#include <stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX_NODES 1000
#define oo 1000000000
int n,e,head,tail;
int capacity[MAX_NODES][MAX_NODES],flow[MAX_NODES][MAX_NODES],color[MAX_NODES],pred[MAX_NODES],q[MAX_NODES+2];
int min (int x, int y) {
    return x<y ? x : y;
}
void enqueue (int x) {
    q[tail] = x;
    tail++;
    color[x] = GRAY;
}
int dequeue () {
    int x = q[head];
    head++;
    color[x] = BLACK;
    return x;
}
int bfs (int start, int target) {
    int u,v;
    for (u=0; u<n; u++) {
	color[u] = WHITE;
    }   
    head = tail = 0;
    enqueue(start);
    pred[start] = -1;
    while (head!=tail) {
	u = dequeue();
	for (v=0; v<n; v++) {
	    if (color[v]==WHITE && capacity[u][v]-flow[u][v]>0) {
		enqueue(v);
		pred[v] = u;
	    }
	}
    }
    return color[target]==BLACK;
}
Ford-Fulkerson Algorithm
int max_flow (int source, int sink) {
    int i,j,u;
    int max_flow = 0;
    for (i=0; i<n; i++) {
	for (j=0; j<n; j++) {
	    flow[i][j] = 0;
	}
    }
    while (bfs(source,sink)) {
	int increment = oo;
	for (u=n-1; pred[u]>=0; u=pred[u]) {
	    increment = min(increment,capacity[pred[u]][u]-flow[pred[u]][u]);
	}
	for (u=n-1; pred[u]>=0; u=pred[u]) {
	    flow[pred[u]][u] += increment;
	    flow[u][pred[u]] -= increment;
	}
	max_flow += increment;
    }
    return max_flow;
}
void read_input_file() {
    int a,b,c,i,j;
    FILE* input = fopen("inputfile","r");
    fscanf(input,"%d %d",&n,&e); 
    for (i=0; i<n; i++) {
	for (j=0; j<n; j++) {
	    capacity[i][j] = 0;
	}
    }
    for (i=0; i<e; i++) {
	fscanf(input,"%d %d %d",&a,&b,&c);
	capacity[a][b] = c;
    }
    fclose(input);
}
int main () {
    read_input_file();
    printf("%d\n",max_flow(0,n-1));
    return 0;
}
/*inputfile is input file like this
6 10    // 6 nodes, 10 edges
0 1 16  // capacity from 0 to 1 is 16
0 2 13  // capacity from 0 to 2 is 13
1 2 10  // capacity from 1 to 2 is 10
2 1 4   // capacity from 2 to 1 is 4
3 2 9   // capacity from 3 to 2 is 9
1 3 12  // capacity from 1 to 3 is 12
2 4 14  // capacity from 2 to 4 is 14
4 3 7   // capacity from 4 to 3 is 7
3 5 20  // capacity from 3 to 5 is 20
4 5 4   // capacity from 4 to 5 is 4
*/