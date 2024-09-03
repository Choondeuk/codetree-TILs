#include <iostream>
using namespace std;

int main() {
    int N;
    int x=0,y=0;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int dir_num=0;

    cin >> N;
    int move[N];
    char w[N];
    int cnt = 0, fin = -1;
    for(int i=0;i<N;i++){
        cin >> w[i] >> move[i]; 
    }
    for(int i=0;i<N;i++){
        if(w[i] == 'E'){
            dir_num = 0;
        }
        else if (w[i] == 'S'){
            dir_num = 1;
        }
        else if (w[i] == 'W'){
            dir_num = 2;
        }
        else{
            dir_num = 3;
        }
        for(int j=0;j<move[i];j++){
            cnt ++;
            x += dx[dir_num];
            y += dy[dir_num];
            if(x==0 && y ==0){
                fin = cnt;
                break;
            }
        }
        if(x==0 && y ==0){
                fin = cnt;
                break;
            }
    }
    cout << fin;
    // 여기에 코드를 작성해주세요.
    return 0;
}