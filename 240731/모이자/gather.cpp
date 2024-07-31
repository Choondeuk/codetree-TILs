#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int D[n] = {};
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if ( j>=i){
            sum = sum + A[j]*(j-i);
            }
            else {
                sum = sum + A[j]*(i-j);
            }
        }
        D[i] = sum;
        sum = 0;
    }
    int min = D[0];
    for (int i=1;i<n;i++){
        if (D[i] < D[i-1]){
            min = D[i];
        }
    }
    cout << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}