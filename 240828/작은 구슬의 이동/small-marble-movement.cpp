#include <iostream>
using namespace std;
bool InRange(int x,int y,int n){
    return (0<=x && x<n && 0<=y && y<n);
}

int main() {
    int dx[4] = {0,1,-1,0} , dy[4] = {1,0,0,-1};
    int nx,ny;
    int n,t;
    int x,y;
    char d;
    int dir;
    cin >> n >> t;
    cin >> x >> y >> d;
    x = x-1;
    y = y-1;
    if (d == 'R'){
        dir = 0;
    }
    else if (d == 'D'){
        dir = 1;
    }
    else if(d == 'U'){
        dir =2;
    }
    else{
        dir = 3;
    }
    for(int i=0;i<t;i++){
        nx = x+dx[dir];
        ny = y + dy[dir];
        if(InRange(nx,ny,n)!=1){
            dir = 3-dir;
        }
        else{
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x+1 << " " <<y+1;

    // 여기에 코드를 작성해주세요.
    return 0;
}