#include <iostream>
using namespace std;
#define MAX 101
int main() {
    int n, k;
    int num;
    int max_sum = 0;
    cin >> n >> k;
    int arr[MAX] = {};
    int place[MAX] = {};
    int qty[MAX] = {};
    for(int i = 0; i < n; i++){ 
        cin >> qty[i] >> place[i];
        arr[place[i]] += qty[i];
    }
    for(int i = 0; i <= 100; i++){
        int sum = 0;
            for(int j = i; j <= i+2*k; j++){
                if(j >= 0 && j <= 100){
                    sum += arr[j];
                }
            }
        
        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
    return 0;
}