#include <iostream>
using namespace std;
#define MAX 101
int n, m;
char a = 'A';
int num = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int x = 0, y = 0;
char arr[MAX][MAX] = {};

bool Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < m);
}

void move(){
    int nx = x + dx[num%4];
    int ny = y + dy[num%4];
    if(Inrange(ny, nx) == false || arr[ny][nx] != 0)
        num++;
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
    for(int i = 1; i <= n*m; i++){
        arr[y][x] = a;
        move();
        // a = (a + 1 -'A')%26 + 65;
        a = 'A' + (i % 26);
    }
    print();
    return 0;
}

// 65 66 - 80