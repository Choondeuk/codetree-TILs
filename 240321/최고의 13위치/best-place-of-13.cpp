#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define MAX 20
int main() {
    int n;
    int arr[MAX][MAX] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int max_cnt = 0;
    for(int k = 0; k < n; k++){
        for(int h = 0; h < n-2; h++){
            max_cnt = max(max_cnt, (arr[k][h]+arr[k][h+1]+arr[k][h+2]));
        }
    }
    cout << max_cnt;
    return 0;
}