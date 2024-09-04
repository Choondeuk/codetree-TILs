#include <iostream>
using namespace std;
#include <string>
int main() {
    int x=0,y=0;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int cnt =0;
    int dir_num=3;

    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if (str[i] == 'R'){
            dir_num = (dir_num+1)%4;
        }
        else if ( str[i] == 'L'){
            dir_num = dir_num -1;
            if(dir_num == -1){
                dir_num = 3;
            } 
        }
        else{
            x += dx[dir_num];
            y += dy[dir_num];
        }
        cnt++;
        if (x == 0 && y==0){
            cout << cnt;
            break;
        }
        else if(i == str.length()-1){
            cout << -1;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}