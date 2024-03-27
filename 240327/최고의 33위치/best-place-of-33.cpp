#include <iostream>
using namespace std;
#define MAX 20
int main() {
    int n;
    int max_cnt = 0;
    cin >> n;
    int arr[MAX][MAX] = {};
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            cin >> arr[col][row];
        }
    }
    for(int col = 0; col < n-2; col++){
        for(int row = 0; row < n-2; row++){
            int cnt = 0;
            for(int i = col; i < col+3; i++){
                for(int j = row; j < row+3; j++){
                    cnt += arr[i][j];
                }
            }
            max_cnt = max(max_cnt, cnt);
        }
    }
    cout << max_cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}