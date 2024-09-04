#include <iostream>
using namespace std;
bool InRange(int x,int y,int n){
    return (0<=x && x<n && 0<=y && y<n);
}

int main() {
    int N,M;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int nx,ny;
    int dir_num = 0;
    cin >> N >> M;
    int a[N][N];
    int r,c;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            a[N][N] = 0;
        }
    }
    for(int i=0;i<M;i++){
        cin >> r >> c;
        a[r-1][c-1] = 1;
        int cnt =0;
        for(int j=0;j<4;j++){
            nx = r-1 + dx[j];
            ny = c-1 + dy[j];
            if(InRange(nx,ny,N) && a[nx][ny] == 1){
                cnt++;
            }
        }
        if (cnt == 3){
            cout << 1<<endl;
        }
        else{
            cout <<0<<endl;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}