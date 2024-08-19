#include <iostream>
using namespace std;
#include <string>
int main() {
    int N,cnt = 0;
    string str;
    cin >> N;
    cin >> str;
    for(int i=0;i<N-2;i++){
        if (str[i] == 'C'){
            for(int j = i+1;j<N-1;j++){
                if (str[j] == 'O'){
                    for(int k=j+1;k<N;k++){
                        if (str[k]=='W'){
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout <<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}