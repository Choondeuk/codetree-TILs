#include <iostream>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    string dir;
    cin >> dir;
    int dir_num = 0;
    int x = 0, y = 0;
    int len = dir.length();
    for(int i = 0; i < len; i++){
        if(dir[i] == 'L')   dir_num += 3;
        else if(dir[i] == 'R')  dir_num += 1;
        else{
            x += dx[dir_num % 4];
            y += dy[dir_num % 4];
        }
    }
    cout << x << " " << y;
    // 여기에 코드를 작성해주세요.

    return 0;
}