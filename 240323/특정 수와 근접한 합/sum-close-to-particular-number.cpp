#include <iostream>
using namespace std;

#define MAX = 100
int main() {
    int s, n;
    int c_dif = 99999999;
    int arr[100] = {};
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < n; j++){
        for(int k = j+1; k <n; k++){
            int sum = 0;
            for(int i = 0; i < n; i++){
                if(i == k || i == j)    continue;
                sum += arr[i];
            }
            c_dif = min(abs(s-sum), c_dif);
        }
    }
    cout << c_dif;
    return 0;
}