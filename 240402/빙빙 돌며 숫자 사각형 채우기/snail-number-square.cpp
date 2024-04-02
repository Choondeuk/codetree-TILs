#include <iostream>
using namespace std;
#define MAX 100
int n, m;
int arr[MAX][MAX] = {};

int Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < m);
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin >> n >> m;
    int cnt = 1;
    int end = 1;
    int num = 0;
    int x = 0, y = 0;
    while(1){
        if(end > 2)
            break;
        arr[y][x] = cnt;
        x += dx[num%4];
        y += dy[num%4];
        if(Inrange(y, x) && arr[y][x] == 0){
            end = 1;
            cnt++;
        }
        else{ 
            x -= dx[num%4];
            y -= dy[num%4];
            num++;
            end++;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }    

    return 0;
}