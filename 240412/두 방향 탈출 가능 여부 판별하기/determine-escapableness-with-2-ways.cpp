#include <iostream>
using namespace std;
#define MAX 100
int n, m, sn;
int cnt = 0;
int arr[MAX][MAX] = {};
int visited[MAX][MAX] = {};
int dx[2] = {1, 0};
int dy[2] = {0, 1};
bool cango(int y, int x){
    return(
        0 <= y && y < n && 0 <= x && x < m
        && arr[y][x] == 1
        && !visited[y][x]);
}

void DFS(int y, int x){
    for(int i = 0; i < 2; i++){
        int cur_x = x + dx[i];
        int cur_y = y + dy[i];
        if(cango(cur_y, cur_x)){
            visited[cur_y][cur_x] = 1;
            x = cur_x;
            y = cur_y;
            if(x == m-1 && y == n-1)
                cnt++;
            DFS(y, x);

        }
    }
}
int main() {
    cin >> n >> m ; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> sn;
            arr[i][j] = sn;
        }
    }
    DFS(0, 0);
    cout << cnt; 
    return 0;
}