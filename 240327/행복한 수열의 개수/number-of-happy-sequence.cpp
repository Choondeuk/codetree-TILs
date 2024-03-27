#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int n, m;
    cin >> n >> m; 
    int cnt_1 = 1, cnt_2 = 1;
    int cnt_happy = 0;
    int prev = 0;
    int arr[MAX][MAX] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    if(m == 1){
        cout << 2*n;
        return 0;
    }
    for(int col = 0; col < n; col++){
        cnt_2 = 1;
        for(int i = 1; i < n; i++){
            if(arr[col][prev] != arr[col][i]){
                cnt_2  = 0; 
            }
            cnt_2++;
            prev = i;
            if(cnt_2 == m){
                cnt_happy++;
                break;
            }
        }
    }

    for(int row = 0; row < n; row++){
        cnt_1 = 1;
        for(int i = 1; i < n; i++){
            if(arr[prev][row] != arr[i][row]){
                cnt_1 = 0;
            }
            cnt_1++;
            prev = i;
            if(cnt_1 == m){
                cnt_happy++;
                break;
            }
        }
    }
    cout << cnt_happy;
    // 여기에 코드를 작성해주세요.
    return 0;
}