#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n;
    cin >>n;
    int sum=0;
    int A[4],B[4];
    A[0] = n/1000;
    A[1] = (n/100)%10;
    A[2] = (n/10)%10;
    A[3] = n%10;
    for(int i=0;i<4;i++){
        B[i] = A[i];
    }
    int max =0,cnt=0;
    for(int i=1;i<4;i++){
        if(A[i]==1){
            A[i] = 0;
        }
        else {
            A[i] = 1;
        }
        for(int j=0;j<4;j++){
            cnt+= A[j]*pow(2,3-j);
        }
        if(cnt>max){
            max = cnt;
        }
        cnt = 0;
        A[i] = B[i];

    }
    cout <<max;
    // 여기에 코드를 작성해주세요.
    return 0;
}