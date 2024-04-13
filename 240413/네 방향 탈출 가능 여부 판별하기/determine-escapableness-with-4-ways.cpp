#include <iostream>
#include <queue>
using namespace std;
#define MAX 100
int n, m;
int arr[MAX][MAX] = {};
int visited[MAX][MAX] = {};
queue<pair<int, int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < m);
}

void BFS(){
    while(!q.empty()){
        pair<int, int> curr_pos = q.front();
        int y = curr_pos.first;
        int x = curr_pos.second;
        q.pop();

        for(int k = 0; k < 4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(Inrange(ny, nx) && arr[ny][nx] && !visited[ny][nx]){
                visited[ny][nx] = 1;
                q.push(make_pair(ny, nx));
                
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    q.push(make_pair(0,0));
    BFS();
    cout << visited[n-1][m-1];

    return 0;
    
}