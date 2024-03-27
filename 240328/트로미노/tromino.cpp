#include <iostream>
using namespace std;
#define MAX 200
int grid[MAX][MAX] = {};
int n, m;

int shapes[6][3][3] = {
    {{1, 1, 0},
    {1, 0, 0},
    {0, 0, 0}},

    {{1, 1, 0},
    {0, 1, 0},
    {0, 0, 0}},

    {{1, 0, 0},
    {1, 1, 0},
    {0, 0, 0}},

    {{0, 1, 0},
    {1, 1, 0},
    {0, 0, 0}},

    {{1, 1, 1},
    {0, 0, 0},
    {0, 0, 0}},

    {{1, 0, 0},
    {1, 0, 0},
    {1, 0, 0}},
};
int getsum(int x, int y){
    int max_sum = 0;

    for(int i = 0; i < 6; i++){
        bool is_pos = true;
        int sum = 0;
        for(int dx = 0; dx < 3; dx++){
            for(int dy = 0; dy < 3; dy++){
                if(shapes[i][dx][dy] == 0)  continue;
                if(x + dx >= n || y + dy >= m)  is_pos = false;
                else    sum += grid[x+dx][y+dy];
            }
            if(is_pos)
                max_sum = max(max_sum, sum);
        }

    }
    return max_sum;
}
int main(){

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans = max(ans, getsum(i, j));
        }
    }
    cout << ans;
    return 0;
}


// int n, m;
// bool check(int i, int j, int x1, int x2, int y1, int y2){
//     return(0 <= i+y1 && i+y1 < n 
//     && 0 <= i+y2 && i+y2 < n
//     && 0 <= j+x1 && j+x1 < m
//     && 0 <= j+x2 && j+x2 < m );
// }
// int dx1[5] = {1, 0, -1, 0, 1};
// int dy1[5] = {0, -1, 0, 1, 0};
// int dx2[4] = {1, -1, 0, 0};
// int dy2[4] = {0, 0, 1, -1};

// int main() {

//     int arr[MAX][MAX] = {};
//     int max_sum = 0;
//     int max_sum1 = 0, max_sum2 = 0;

//     cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             int sum1 = 0;
//             int sum2 = 0;
//             for(int k = 0; k < 4; k++){
//                 if(check(i, j, dx1[k], dx1[k+1], dy1[k], dy1[k+1])){
//                     // cout << i << " " << j << endl;
//                     sum1 += arr[i][j] + arr[i+dy1[k]][j+dx1[k]] + arr[i+dy1[k+1]][j+dx1[k+1]];
//                     max_sum1 = max(max_sum1, sum1);
//                     sum1 = 0;
//                 }
//             }
//             for(int k = 0; k < 4; k+=2){
//                 if(check(i, j, dx2[k], dx2[k+1], dy2[k], dy2[k+1])){
//                     sum2 += arr[i][j] + arr[i+dy2[k]][j+dx2[k]] + arr[i+dy2[k+1]][j+dx2[k+1]];
//                     max_sum2 = max(max_sum2, sum2);
//                     sum2 = 0;
//                 }
//             }
//             max_sum = max(max_sum1, max_sum2);
//         }
//     }
//     cout << max_sum;