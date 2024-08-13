#include <iostream>
using namespace std;
#include <string>
int main() {
    string A;
    cin >> A;
    int cnt = 0;
    for(int i = 0;i<A.length();i++){
        if (A[i] == '('){
            for(int j = 1;j<A.length()-i;j++ ){
                if (A[i+j] == ')'){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}