#include <iostream>
using namespace std;

int main() {
    int x =0, y = 0;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int nx,ny;
    int n,a;
    char b;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> b >> a;
        if(b == 'E'){
            x = x + a * dx[0];
            y = y + a * dy[0];
        } 
        else if (b == 'S'){
            x = x + a * dx[1];
            y = y + a * dy[1];
        }
        else if (b == 'W'){
            x = x + a * dx[2];
            y = y + a * dy[2];
        }
        else{
            x = x + a * dx[3];
            y = y + a * dy[3];
        }
    }
    cout << x <<" "<< y;
    // 여기에 코드를 작성해주세요.
    return 0;
}