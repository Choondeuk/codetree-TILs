#include <iostream>
#include <queue>
using namespace std;
#define MAX 100
int n, k, r, c;
int cnt = 0;
queue <pair<int, int>> q;

bool Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < n);
}

int arr[MAX][MAX] = {};
int visited[MAX][MAX];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void BFS(){
    while(!q.empty()){
        pair <int, int> cur_p = q.front();
        int y = cur_p.first;
        int x = cur_p.second;
        q.pop();
        for(int h = 0; h < 4; h++){
            int ny = y + dy[h];
            int nx = x + dx[h];
            if(Inrange(ny, nx) && !arr[ny][nx] && !visited[ny][nx]){
                visited[ny][nx] = true;
                q.push(make_pair(ny, nx));
                
            }
        }
    }
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < k; i++){
        cin >> r >> c;
        q.push(make_pair(r-1, c-1));
    }
    BFS();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(visited[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}