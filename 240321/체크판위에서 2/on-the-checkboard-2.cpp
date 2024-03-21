#include <iostream>
using namespace std;
#define MAX 15
int main() {
    int r, c;
    int cnt = 0;
    cin >> r >> c;
    char arr[MAX][MAX] = {};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    if(arr[0][0] != arr[r-1][r-1]){
        for(int col = 1; col < c-2; col++){
            for(int row = 0; row < r-2; row++){
                if(arr[0][0] != arr[col][row]){
                    for(int col_2 = col+1; col_2 < c-1; col_2++){
                        for(int row_2 = row+1; row_2 < r-1; row_2++){
                            if(arr[col][row] != arr[col_2][row_2])
                                cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}