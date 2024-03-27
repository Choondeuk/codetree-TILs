#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100
int main() {
    int n, m;
    bool bt;
    int cnt = 0;
    int A[MAX] = {};
    int B[MAX] = {};
    int tmp[MAX] = {};
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }
    sort(B, B+m);
    for(int i = 0; i <= n-m; i++){
        for(int k = 0; k < m; k++){            
                tmp[k] = A[i+k];
        }
        sort(tmp, tmp+m);
        bt = true;
        for(int i = 0; i < m; i++){
            if(tmp[i] != B[i]){
                bt = false;
            }
        }
        if(bt == true)  cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}