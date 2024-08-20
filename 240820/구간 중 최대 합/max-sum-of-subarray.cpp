#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int max = 0,cnt = 0;
    for(int i=0;i<n-k+1;i++){
        for(int j=0;j<k;j++){
            cnt +=a[i+j];
        }
        if(cnt > max){
            max = cnt;
            
        }
        cnt = 0;
    }
    cout << max;
    return 0;
}