#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    int min,cnt=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j<i){
                cnt+=(N-i+j)*A[j];
            }
            else{
            cnt+=(j-i)*A[j];
            }
        }
        if(i==0){
            min = cnt;
        }
        else if (cnt<min){
            min = cnt;
        }
        cnt =0;
    }
    cout << min;

    return 0;
}