#include <iostream>
#include <string>
using namespace std;

int dir_num;
int ans = -1;
string str;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};


int main() {
    cin >> str;
    int len = str.length();
    int x = 0, y = 0;
    char cur_dir = 'F';
    for(int i = 0; i < len; i++){
        if(str[i] == 'L'){
            dir_num += 3;
        }
        else if(str[i] == 'R'){
            dir_num++;
        }
        else{
            x += dx[dir_num%4];
            y += dy[dir_num%4];
        }
        if(x == 0 && y == 0){
            ans = i+1;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    cout << ans;
    return 0;
}