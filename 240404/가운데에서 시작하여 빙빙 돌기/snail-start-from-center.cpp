#include <iostream>
using namespace std;
#define MAX 100
int n, num;
int x, y;
int cnt = 1;
int arr[MAX][MAX] = {};

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < n);
}

void print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void move(){

    for(int i = 1; i <= n; i++){
        for(int k = 0; k < 2; k ++){
            for(int j = 0; j < i; j++){
                arr[y][x] = cnt;
                x += dx[num%4];
                y += dy[num%4];
                cnt++;  
            }
            num++;
        }
        
    }
}

int main() {
    cin >> n;
    x = (n-1)/2;
    y = (n-1)/2;
    move();

    print();
    return 0;
}