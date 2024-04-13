#include <iostream>
#include <queue>
using namespace std;
#define MAX 100
int n, m;
int ans = 0;
int arr[MAX][MAX] = {};
int visited[MAX][MAX] = {};
queue<pair<int, int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < m);
}

void BFS(int y, int x){
    while(!q.empty()){
        pair<int, int> curr_pos = q.front();
        int y = curr_pos.first;
        int x = curr_pos.second;
        q.pop();

        for(int k = 0; k < 4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(Inrange(ny, nx) && arr[ny][nx] == 1){
                visited[ny][nx] = 1;
                BFS(ny, nx);
            }
        }
    }
    if(arr[y][x] == arr[n-1][m-1])
        ans = 1;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    BFS(0, 0);
    cout << ans;
    return 0;
    
}