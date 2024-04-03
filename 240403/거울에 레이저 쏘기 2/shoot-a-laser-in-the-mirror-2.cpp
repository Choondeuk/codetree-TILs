#include <iostream>
using namespace std;
#define MAX 1000
int n, k, num;
int cnt = 0;
char mirror;
int x = 0, y = 0;
int arr[MAX][MAX] = {};

bool Inrange(int y, int x){
    return(0 <= y && y < n && 0 <= x && x < n);
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int change_ang(int y, int x){
    if(arr[y][x] == 1)
        return (3 - num);
    else 
        return (num ^ 1);
}
void initialize(){
    if(k <= n)  num = 1;
    else if(k <= n*2)   num = 2;
    else if(k <= n*3)   num = 3;
    else    num = 0;
    int k_num = 0;
    for(int i = 1; i < k; i++){
        int nx = x + dx[k_num];
        int ny = y + dy[k_num];
        if(arr[ny][nx] == 0){
            k_num++;
            continue;
        }
        x = nx;
        y = ny;
    }
    
}

// / 30 12
// \ 01 23

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mirror;
            if(mirror == '/')
                arr[i][j] = 1;
            else
                arr[i][j] = 2; 
        }
    }
    cin >> k;
    initialize();
    while(Inrange(y, x)){
        num = change_ang(y, x);
        x += dx[num];
        y += dy[num];
        cnt++;
        // cout << x << " " << y << " " << arr[y][x] << endl;
    }
    cout << cnt;
    return 0;
    
}


// int n, k;
// int cnt = 0;
// char mirror;
// int arr[MAX][MAX] = {};
// int dx[4] = {1, 0, -1, 0};
// int dy[4] = {0, 1, 0, -1};

// //  / 03 12
// //  \ 01 23


// bool Inrange(int y, int x){
//     return(0 <= y && y < n && 0 <= x && x < n);
// }

// int change_ang(int y, int x, int num){
//     if(arr[y][x] == 1)
//         return 3 - num;
//     else if(num == 0 || num == 2)
//         return num + 1;
//     else
//         return num - 1;
// }

// int main() {
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> mirror;
//             if(mirror == '/')
//                 arr[i][j] = 1;  
//             else
//                 arr[i][j] = 2;
//         }
//     }
//     cin >> k;
//     int k_pos = k/n;
//     if(k % n == 0)    k_pos--;
//     int num = (k_pos + 1) % 4;
    
//     int k_num = 0;
//     int x = 0, y = 0;
//     int nx = x;
//     int ny = y;
//     for(int i = 1; i < k; i++){
//         nx = x + dx[k_num];
//         ny = y + dy[k_num];
//         if(arr[ny][nx] == 0)
//             k_num++;
//         else{
//             x = nx;
//             y = ny;
//         }
//     }

//     while(Inrange(y, x)){
//         num = change_ang(y, x, num);
//         x += dx[num];
//         y += dy[num];
//         cnt++;
//     }

//     cout << cnt;