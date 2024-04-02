#include <iostream>
using namespace std;
int n, t, y, x;
char dir;

int direction(char a){
    int num;
    if(a == 'U')    num = 1;
    else if(a == 'D')   num = 2;
    else if(a == 'L')   num = 3;
    else    num = 0;

    return num;
}

int Inrange(int y, int x, int n){
    return(1 <= y && y <= n && 1 <= x && x <= n);
}

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};


int main() {
    cin >> n >> t >> y >> x >> dir;
    int dir_num = direction(dir);
    for(int i = 1; i <= t; i++){
        int cur_x = x + dx[dir_num];
        int cur_y = y + dy[dir_num];
        if(Inrange(cur_y, cur_x, n)){
            x = cur_x;
            y = cur_y;
        }
        else{
            dir_num = 3 - dir_num;
        }
    }
    cout << y << " " << x;
    return 0;
}