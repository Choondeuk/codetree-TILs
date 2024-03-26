#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int n, k;
    int max_sum = 0;
    int sum = 0;
    cin >> n >> k;
    int arr[100] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-k; i++){
        for(int j = i; j < i+k; j++){
            sum += arr[j];
        }
        max_sum = max(max_sum, sum);
        sum = 0;
    }
    cout << max_sum;
    return 0;
}