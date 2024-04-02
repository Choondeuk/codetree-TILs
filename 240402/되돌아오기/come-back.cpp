#include <iostream>
using namespace std;
int n;
int mapper(char a){
    int num;
    if(a == 'N')    num = 3;
    else if(a == 'E')    num = 0;
    else if(a == 'W')    num = 2;
    else if(a == 'S')    num = 1;

    return num;
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    cin >> n; 
    int x = 0, y = 0;
    int size;
    char dir;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> dir >> size;
        int dir_num = mapper(dir);
        for(int j = 0; j < size; j++){
            x += dx[dir_num];
            y += dy[dir_num];
            cnt++;
            if(y == 0 && x == 0){
                cout << cnt;
                return 0;
            }  
        }
    }
    cout << -1;
    return 0;
}