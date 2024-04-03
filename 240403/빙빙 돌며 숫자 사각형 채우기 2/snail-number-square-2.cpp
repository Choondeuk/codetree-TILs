#include <iostream>
using namespace std;
#define MAX 100
int n, m;
int num = 0;
int cnt = 1;
int x = 0, y = 0;
int arr[MAX][MAX] = {};

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool Inrange(int y, int x){
    return(0 <= y && y < n && 0 <= x && x < m);
}
void move(){
    int nx = x + dx[num%4];
    int ny = y + dy[num%4];
    if(Inrange(ny, nx) == false || arr[ny][nx] != 0){
        num++;
    }
    x += dx[num%4];
    y += dy[num%4];
}
void print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n*m; i++){
        arr[y][x] = cnt; 
        move();
        cnt++;
    }
    print();
    return 0;
}