#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    int cnt =0;
    for(int i=0;i<n;i++){
        cin >>A[i];
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if (A[i] <= A[j] && A[j]<=A[k]){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}