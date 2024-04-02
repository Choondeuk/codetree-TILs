#include <iostream>
using namespace std;
#define MAX 100
bool Inrange(int y, int x, int n){
    return(0 <= y && y < n && 0 <= x && x < n);
}
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
int n;
int res = 0;
cin >> n; 
int arr[MAX][MAX];
for(int i = 0; i < n; i ++){
    for(int j = 0; j < n; j++){
        cin >> arr[i][j];
    }
}
for(int y = 0; y < n; y++){
    for(int x = 0; x < n; x++){
        int cnt = 0;
        for(int k = 0; k < 4; k++){
            int cur_x = x + dx[k];
            int cur_y = y + dy[k];
            if(Inrange(cur_y, cur_x, n)){
                if(arr[cur_y][cur_x] == 1)  cnt++;
            }

        }
        if(cnt >= 3)    res++;
    }
}
    cout << res;
    return 0;
}