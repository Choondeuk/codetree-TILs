#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N,K;
    cin >> N >> K;
    int a[100]={0};
    int cnt,loc;
    for(int i=0;i<N;i++){
        cin >> cnt >>loc;
        a[loc-1] +=cnt;
    }
    int max = 0, cnt2=0,loc2;
    if(K<50){
    for(int i=0;i<100-2*K;i++){
        for(int j=0;j<2*K+1;j++){
            cnt2 +=a[i+j];
        }
        if(cnt2>max){
            max = cnt2;
            loc2 = i+K-1;
        }
        cnt2 = 0;
    }}
    else{
        for(int i=0;i<100;i++){
            max+=a[i];
        }
    }
    cout <<max;
    



    
    return 0;
}