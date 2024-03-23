#include <iostream>
using namespace std;
#define MAX 20

int check(int row1, int row2, int col1, int col2){
    return ((row1 + 2 < row2) || (row1-2 > row2) || (col1 != col2));
}
int main() {
    int n, cnt1, cnt2;
    int max_cnt = 0;
    int arr[MAX][MAX] = {};
    cin >> n;
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            cin >> arr[col][row];
        }
    }
    for(int col1 = 0; col1 < n; col1++){
        for(int row1 = 0; row1 < n-2; row1++){
            cnt1 = 0;
            for(int k = 0; k < 3; k++){
                if(arr[col1][row1+k] == 1)  cnt1++;
            }
            for(int col2 = 0; col2 < n; col2++){
                for(int row2 = 0; row2 < n-2; row2++){
                    if(check(row1, row2, col1, col2) == false)  continue;
                    cnt2 = 0;
                    for(int k = 0; k < 3; k++){
                        if(arr[col2][row2+k] == 1)  cnt2++;
                    }
                    max_cnt = max(max_cnt, cnt1+cnt2);
                    if(cnt1 + cnt2 == 6){
                        cout << cnt1 + cnt2;
                        return 0;
                    }
                }
            }
        }
    }

    cout << max_cnt;
    return 0;
}