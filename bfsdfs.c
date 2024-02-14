/*#include<stdio.h>
#define MAX 5
void bfs(int adj[][MAX],int visited[],int start){
    int queue[MAX],rear=-1,front=-1,i,k;
    for(k=0;i<MAX;k++){
        visited[k]=0;
    }
    queue[++rear]=start;
    ++front;
    visited[start]=1;
    while(rear>=front){
        start=queue[front];
        printf("%d\t",start);
        for(i=0;i<MAX;i++){
            if(adj[start][i]&& visited[i]==0){
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
}
int main(){
    int visited[MAX]={0};
    int n,m;
    printf("enter the no.of node \n no.of edges");
    scanf("%d",&n);
    scanf("%d",&m);
    int adj[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        scanf("%d",&u);
        scanf("%d",&v);
        adj[u][v]=1;
        adj[v][u]=1;
    }
    bfs(adj,visited,0);
    return 0;

}*/
#include <stdio.h>

#define MAX 5

void bfs(int adj[][MAX], int visited[], int start) {
    int queue[MAX], rear = -1, front = -1, i;

    for (i = 0; i < MAX; i++) {
        visited[i] = 0;
    }

    queue[++rear] = start;
    ++front;
    visited[start] = 1;

    while (rear >= front) {
        start = queue[front];
        printf("%d\t", start);

        for (i = 0; i < MAX; i++) {
            if (adj[start][i] && visited[i] == 0) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
        ++front;
    }
}

int main() {
    int visited[MAX] = {0};
    int n, m;
    
    printf("Enter the number of edges: ");
    scanf("%d", &m);

    int adj[MAX][MAX] = {0};

    for (int i = 0; i < m; i++) {
        int u, v;
        printf("Enter edge %d (u v): ", i + 1);
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    printf("BFS Traversal starting from vertex 0: ");
    bfs(adj, visited, 0);

    return 0;
}
