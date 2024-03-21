#include <iostream>
using namespace std;
int main() {
    string A;
    int cnt = 0;
    cin >> A;
    for(int i = 0; i < A.size()-2;  i++){
        for(int j = i+2; j < A.size()-1; j++){
            if(A[i] == '(' && A[i+1] == '(' && A[j] == ')'&& A[j+1] == ')')
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}