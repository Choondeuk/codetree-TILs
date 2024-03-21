#include <iostream>
#include <climits>
using namespace std;
#define MAX 1003
int main() {
    int n;
    int min_cost = INT_MAX;
    int arr[MAX] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int st = 0; st < n; st++){
        int cost = 0;
        for(int j = 0; j < n; j++){
            cost += (j-st+n)%n *arr[j];
        }
        min_cost = min(min_cost, cost);
    }
    cout << min_cost;
    return 0;
}