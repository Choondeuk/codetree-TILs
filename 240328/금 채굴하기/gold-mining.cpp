#include <iostream>
using namespace std;
#define MAX 20
int n, m;
int arr[MAX][MAX]= {};

int get_area(int k){
    return (k*k + (k+1)*(k+1));
}

int get_nog(int y, int x, int k){
    int nog = 0;
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            if(abs(row-x) + abs(col-y) <= k){
                nog += arr[col][row];
            }
        }
    }
    return nog;
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int max_gold = 0;
    for(int y = 0; y < n; y++){
        for(int x = 0; x < n; x++){
            for(int k = 0; k <= 2*(n-1); k++){
                if(get_nog(y, x, k) * m  >= get_area(k)){
                    max_gold = max(max_gold, get_nog(y, x, k));
                }
            }
        }
    }
    // 여기에 코드를 작성해주세요.
    cout << max_gold;
    return 0;
}