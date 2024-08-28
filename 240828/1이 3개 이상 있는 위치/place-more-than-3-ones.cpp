#include <iostream>
using namespace std;
bool InRange(int x,int y,int n){
        return (0<=x && x<n && 0 <=y && y<n);
    }

int main() {
    int x=0,y=0;
    int dx[4] = {0,-1,0,1},dy[4]={1,0,-1,0};
    int nx,ny;
    int n;
    int cnt1,cnt2 =0;
    cin >> n;
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cnt1 = 0;
            for(int dir=0;dir<4;dir++){
                nx = i + dx[dir];
                ny = j + dy[dir];
                if(InRange(nx,ny,n) && a[nx][ny] ==1){
                    cnt1++;
                }
            }
            if(cnt1 >= 3){
                    cnt2++;
                    
                }
        }
    }
    cout <<cnt2;
        // 여기에 코드를 작성해주세요.
    return 0;
}