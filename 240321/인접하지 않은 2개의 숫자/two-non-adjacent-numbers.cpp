#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int n;
    int max_sum = 0;
    cin >> n;
    int arr[MAX] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < n-2; j++){
        int sum = 0;
        for(int k = j+2; k < n; k++){
            sum = arr[j] + arr[k];
            max_sum = max(max_sum, sum);
        }

    }
    cout << max_sum;
    return 0;
}