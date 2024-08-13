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
        for(int j = 1;j<C;j++){
            if (A[i][j] != t){
                for(int x=i+1;x<R-1;x++){
                    for(int y=j+1;y<C-1;y++){
                        if (A[x][y] == t){
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    if (A[R-1][C-1] == A[0][0]){
            cout << 0;
    }
    else{
    cout << cnt;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}