#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int n, m;
    bool bt;
    int check = 0;
    int cnt = 0;
    int A[MAX] = {};
    int B[MAX] = {};
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }

    for(int i = 0; i <= n-m; i++){
        check = 0;
        for(int k = i; k < i+m; k++){            
            for(int h = 0; h < m; h++){
                if(A[k] == B[h]){
                    check++;
                    break;
                }
            }
        }
        if(check == m)  {
            cnt++; 
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}