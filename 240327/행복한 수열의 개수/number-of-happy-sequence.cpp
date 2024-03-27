#include <iostream>
using namespace std;
#define MAX 100
int n, m;
int cnt_happy = 0;
int arr[MAX][MAX] = {};
int seq[MAX] = {};
bool check(){
    int cnt = 1;
    int max_cnt = 1;
    int prev = 0;
    for(int i = 1; i < n; i++){
        if(seq[prev] != seq[i]){
            cnt = 0;
        }
        cnt++;
        prev = i;
        max_cnt = max(max_cnt, cnt);
    }
    if(max_cnt >= m){
        cnt_happy++;
        return 0;
    }
    
    return 0;
}

int main() {
    cin >> n >> m;
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            cin >> arr[col][row];
        }
    }
    
    for(int col = 0; col < n; col++){
        for(int i = 0; i < n; i++){
            seq[i] = arr[col][i];
        }
        check();
    }
    for(int row = 0; row < n; row++){
        for(int i = 0; i < n; i++){
            seq[i] = arr[i][row];
        }
        check();
    }
    cout << cnt_happy;
    return 0;
}



    // int n, m;
    // cin >> n >> m; 
    // int cnt_1 = 1, cnt_2 = 1;
    // int cnt_happy = 0;
    // int prev = 0;
    // int arr[MAX][MAX] = {};
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> arr[i][j];
    //     }
    // }
    // if(m == 1){
    //     cout << 2*n;
    //     return 0;
    // }
    // for(int col = 0; col < n; col++){
    //     prev = 0;
    //     cnt_2 = 1;
    //     for(int i = 1; i < n; i++){
    //         if(arr[col][prev] != arr[col][i]){
    //             cnt_2  = 0; 
    //         }
    //         cnt_2++;
    //         prev = i;
    //         if(cnt_2 == m){
    //             cnt_happy++;
    //             break;
    //         }
    //     }
    // }

    // for(int row = 0; row < n; row++){
    //     prev = 0;
    //     cnt_1 = 1;
    //     for(int i = 1; i < n; i++){
    //         if(arr[prev][row] != arr[i][row]){
    //             cnt_1 = 0;
    //         }
    //         cnt_1++;
    //         prev = i;
    //         if(cnt_1 == m){
    //             cnt_happy++;
    //             break;
    //         }
    //     }
    // }
    // cout << cnt_happy;
    // // 여기에 코드를 작성해주세요.