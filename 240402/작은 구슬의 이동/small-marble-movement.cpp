#include <iostream>
using namespace std;
#define MAX 50
int n, t, y, x;
bool turn = false;
char dir;   
int arr[MAX+1][MAX+1] = {};
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

int direction(char a){
    if(a == 'U')    return 2;
    else if(a == 'D')   return 1;
    else if(a == 'R')   return 0;
    else    return 3;
}
int Inrange(int y, int x, int n){
    if(1 <= y && y <= n && 1 <= x && x <= n)
        return 0;
    
    turn = true;
    return 3;
}
int main() {
    cin >> n >> t >> y >> x >> dir;
    // arr[y][x] = 1;
    
    int num = direction(dir);
    for(int i = 1; i <= t; i++){
        turn = false;
        // arr[y][x] = 0;
        num = abs(Inrange(y+dy[num], x+dx[num], n) - num);
        if(turn)    continue;
        x += dx[num];
        y += dy[num];
        // arr[y][x] = 1;
    }
    cout << y << " " << x; 

    return 0;
}