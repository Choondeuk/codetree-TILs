#include <iostream>
using namespace std;
bool InRange(int x,int y,int n,int m){
    return (0<=x && x<n && 0<=y && y<m);
}

int main() {
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0}; 
    int x = 0, y = 0;
    int n,m;
    cin >> n >>m;
    int a[n][m];
    int dir_num = 0;
    int cnt = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int nx,ny;
            a[x][y] = cnt;
            nx = x + dx[dir_num];
            ny = y + dy[dir_num];
             if(InRange(nx,ny,n,m) == 0 || a[nx][ny] != 0 ){
                dir_num = (dir_num + 1) % 4;
            }
           
            x += dx[dir_num];
            y += dy[dir_num];
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    


    // 여기에 코드를 작성해주세요.
    return 0;
}