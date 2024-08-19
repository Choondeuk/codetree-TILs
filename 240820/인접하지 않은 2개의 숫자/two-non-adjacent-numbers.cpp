#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int max=0,cnt=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            cnt = a[i] + a[j];
            if (cnt>max){
                max = cnt;
                
            }
        }
    }
    cout << max;
    // 여기에 코드를 작성해주세요.
    return 0;
}