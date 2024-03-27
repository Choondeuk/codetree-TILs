#include <iostream>
#include <climits>
using namespace std;
#define MAX 100
int main() {
    int n, h, t;
    int arr[MAX] = {};
    int min_cost = INT_MAX;
    cin >> n >> h >> t;
    // int cons = min(n, 10);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //n이 10보다 작을 때 확인 -> ok

    for(int i = 0; i <= n-t; i++){
        int cost = 0;
        for(int j = i; j < i + t; j++){
            cost += abs(h - arr[j]);
        }
        min_cost = min(min_cost, cost);
    }
    cout << min_cost;
    // 여기에 코드를 작성해주세요.
    return 0;
}