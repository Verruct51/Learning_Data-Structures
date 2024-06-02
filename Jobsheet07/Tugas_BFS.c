// Created by 22343019_Alvin Anugerah Pratama
#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

void bfs(int start, int n) {
    int i, v;
    visited[start] = 1;
    queue[++rear] = start;

    while(front != rear) {
        v = queue[++front];
        for(i=0; i<n; i++) {
            if(adj[v][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
        printf("%d ", v);
    }
}

int main() {
    int i, j, n, start;
    printf("Masukkan jumlah simpul: ");
    scanf("%d", &n);
    printf("Masukkan matriks ketetanggaan:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("Masukkan simpul awal: ");
    scanf("%d", &start);
    printf("Jalur BFS: ");
    bfs(start, n);
    printf("\n");
    return 0;
}
