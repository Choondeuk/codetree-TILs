#include <iostream>
using namespace std;
#define MAX 20
#define NUM 4

int arr[MAX][MAX] = {};
int dx[NUM] = {1, -1, -1, 1};
int dy[NUM] = {1, 1, -1, -1};
int n;

bool check_range(int y, int x){
    return(0 <= x && x < n && 0 <= y && y < n);
}
int get_score(int y, int x, int k, int l){
    int sum = 0;
    int len[4] = {k, l, k, l};
    for(int d = 0; d < NUM; d++){
        for(int i = 0; i < len[d]; i++){
            y += dy[d];
            x += dx[d];
            if(check_range(y, x)){
                sum += arr[y][x];
            }
        }
    }
    return sum;
}
int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int max_score = 0;
    for(int y = 0; y < n; y++){
        for(int x = 0; x < n; x++){
            for(int k = 0; k < 4; k++){
                for(int l = 0; l < 4; l++){
                    max_score = max(max_score, get_score(y, x, k, l));
                }
            }
        }
    }
    cout << max_score;
    return 0;
}