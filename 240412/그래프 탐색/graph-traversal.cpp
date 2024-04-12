#include <iostream>
using namespace std;
#define MAX 1001
int n, m, x, y;
int cnt = 0;
int graph[MAX][MAX] = {};
int visited[MAX] = {};
void DFS(int vertex){
    for(int curr_v = 1; curr_v <= MAX; curr_v++){
        if(graph[vertex][curr_v] && !visited[curr_v]){
            cnt++;
            visited[curr_v] = 1;
            DFS(curr_v);
            // cout << curr_v;
        }
    }
}
int main() {
    visited[1] = 1;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    DFS(1);
    cout << cnt;
    return 0;
}