#include <iostream>
using namespace std;

int main() {
    int R,C;
    int cnt=0;
    cin >>R>>C;
    char A[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >>A[i][j]; 
        }
    }
    char t =A[0][0];
    for(int i=1;i<R;i++){
        if (A[R][C] == A[0][0]){
            break;
        }
        for(int j = 1;j<C-1;j++){
            if (A[i][j] != t){
                cnt = ((R-2)-i) *((C-2)-j);
            }
        }
    }
    cout << cnt;


    // 여기에 코드를 작성해주세요.
    return 0;
}