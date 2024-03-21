#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    string A;
    cin >> A;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(A[i] == 'C' && A[j] == 'O' && A[k] =='W')    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}