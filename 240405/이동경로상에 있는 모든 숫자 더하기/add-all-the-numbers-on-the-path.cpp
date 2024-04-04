#include <iostream>
using namespace std;
#define MAX 99

int n, t;
int num = 0;
int cnt = 0;
int x, y;
bool foward;
string str;
int arr[MAX][MAX] = {};
char ch;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    
}
bool Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < n);
}
void dir(char a){
    if(a == 'L')    num += 3;
    else if(a == 'R')   num++;
    else   foward = true;
}
int main() {
    cin >> n >> t >> str;
    x = n/2;
    y = n/2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cnt = arr[y][x];
    for(int i = 0; i < t; i++){
        foward = false;
        dir(str[i]);
        int nx = x + dx[num%4];
        int ny = y + dy[num%4];
        if(Inrange(ny, nx) == false)
            continue;
        if(foward){
            x += dx[num%4];
            y += dy[num%4];
            cnt += arr[y][x];
            // cout << arr[y][x] << " " ;
            
        }

    }
    // 여기에 코드를 작성해주세요.
    // cout << endl;
    // print();
    cout << cnt;
    return 0;
}