#include <iostream>
using namespace std;
#include <string>
int main() {
    int dir_num=3;
    int x = 0, y = 0;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int nx,ny;
    string dir;
    cin >> dir;
    for(int i=0;i<dir.length();i++){
        if (dir[i] == 'L'){
            dir_num = (dir_num -1 +4)%4;  
        }
        else if (dir[i] == 'R'){
            dir_num = (dir_num +1)%4;
        }
        else{
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
    }
    cout << x << " " << y;


    // 여기에 코드를 작성해주세요.
    return 0;
}