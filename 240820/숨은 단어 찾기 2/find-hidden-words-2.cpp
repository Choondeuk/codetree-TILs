#include <iostream>
using namespace std;
#include <string>
int main() {
    int N,M;
    cin >> N >>M;
    string str[N];
    for(int i=0;i<N;i++){
        cin >> str[i];
    }
    int cnt=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M-2;j++){
            if(str[i][j]=='L' && str[i][j+1]=='E' && str[i][j+2]=='E'){
                cnt++;
            }
            else if(str[i][M-1-j]=='L' && str[i][M-2-j]=='E' && str[i][M-3-j]=='E'){
                cnt++;
            }
        }
    }
    for(int i=0;i<N-2;i++){
        for(int j=0;j<M;j++){
            if(str[i][j]=='L' && str[i+1][j]=='E' && str[i+2][j]=='E'){
                cnt++;
            }
            else if(str[N-1-i][j]=='L' && str[N-2-i][j]=='E' && str[N-3-i][j]=='E'){
                cnt++;
            }
        }
    }
    for(int i=0;i<N-2;i++){
        for(int j=0;j<M-2;j++){
            if(str[i][j]=='L' && str[i+1][j+1]=='E' && str[i+2][j+2]=='E'){
                cnt++;
            }
            else if(str[N-1-i][M-1-j]=='L' && str[N-2-i][M-2-j]=='E' && str[N-3-i][M-3-j]=='E'){
                cnt++;
            }
        }
    }
    for(int i=2;i<N;i++){
        for(int j=0;j<M-2;j++){
            if(str[i][j]=='L' && str[i-1][j+1]=='E' && str[i-2][j+2]=='E'){
                cnt++;
            }
        }
    }
    for(int i=0;i<N-2;i++){
        for(int j=2;j<M;j++){
            if(str[i][j]=='L' && str[i+1][j-1]=='E' && str[i+2][j-2]=='E'){
                cnt++;
            }
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}