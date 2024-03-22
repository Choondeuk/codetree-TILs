#include <iostream>
using namespace std;
#define MAX 50

int main() {
    int n, m;
    int cnt = 0;
    char arr[50][50] = {};
    cin >> n >> m;
    for(int col = 0; col < n; col++){
        for(int row = 0; row < m; row++){
            cin >> arr[col][row];
        }
    }
    int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0};
    int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};

    for(int col = 0; col < n; col++){
        for(int row = 0; row < m; row++){
            int cur_x = row;
            int cur_y = col;
            for(int i = 0; i < 8; i++){
                if(arr[cur_y + 2*dy[i]][cur_x + 2*dx[i]] == 0)  continue;

                if(arr[cur_y][cur_x] == 'L' 
                && arr[cur_y + dy[i]][cur_x + dx[i]] == 'E' 
                && arr[cur_y + 2*dy[i]][cur_x + 2*dx[i]] == 'E'){
                    cnt++;
                }

            }
        }
    }
cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}