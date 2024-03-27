#include <iostream>
using namespace std;
#define MAX 200

// bool check(){

// }
int dx1[5] = {1, 0, -1, 0, 1};
int dy1[5] = {0, -1, 0, 1, 0};
int dx2[4] = {1, -1, 0, 0};
int dy2[4] = {0, 0, 1, -1};

int main() {
    int n, m;
    int arr[MAX][MAX] = {};
    int max_sum = 0;
    int max_sum1 = 0, max_sum2 = 0;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int sum1 = 0;
            int sum2 = 0;
            for(int k = 0; k < 4; k++){
                sum1 += arr[i][j] + arr[i+dy1[k]][j+dx1[k]] + arr[i+dy1[k+1]][j+dx1[k+1]];
                max_sum1 = max(max_sum1, sum1);
                sum1 = 0;
            }
            for(int k = 0; k < 4; k+=2){
                sum2 += arr[i][j] + arr[i+dy2[k]][j+dx2[k]] + arr[i+dy2[k+1]][j+dx2[k+1]];
                max_sum2 = max(max_sum2, sum2);
                sum2 = 0;
            }
            max_sum = max(max_sum1, max_sum2);
        }
    }
    cout << max_sum;
    return 0;
}