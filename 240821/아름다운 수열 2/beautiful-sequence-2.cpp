#include <iostream>
using namespace std;

int main() {
    int N,M;
    cin >> N >>M;
    int A[N];
    int B[M];
    int C[M];
    int max=0,cnt1=0,cnt2=0;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<M;i++){
        cin >> B[i];
        C[i] = B[i]; 
    }
    for(int i=0;i<N-M+1;i++){
        for(int j=0;j<M;j++){
            for(int k=0;k<M;k++){
                if(A[i+j] == C[k]){
                    C[k] = 0;
                    break;
                }
            }
        }
        for(int x=0;x<M;x++){
            max += C[x];
            C[x] = B[x];
        }
        if(max ==0){
            cnt2++;
        }
        max = 0;
    }
    cout << cnt2;

    // 여기에 코드를 작성해주세요.
    return 0;
}