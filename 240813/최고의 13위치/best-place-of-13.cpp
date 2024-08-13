#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0,max=0;
    cin >> n;
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cin >> A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            for(int k=0;k<3;k++){
                if(A[i][j+k]==1){
                    cnt++;
                }
            }
            if(cnt>max){
                max = cnt;
            }
            cnt = 0;
        }
    
        
    }
    cout <<max;

    return 0;
}