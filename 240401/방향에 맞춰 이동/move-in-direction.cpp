#include <iostream>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    int n, dir_num, move_num;
    char dir;
    cin >> n;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        cin >> dir >> move_num;
        if(dir == 'E')  dir_num = 0;
        else if(dir == 'W') dir_num = 1;
        else if(dir == 'S') dir_num = 2;
        else if(dir == 'N') dir_num = 3;
        x += dx[dir_num]*move_num;
        y += dy[dir_num]*move_num;
    }
    cout << x << " " << y;
    // 여기에 코드를 작성해주세요.
    return 0;
}