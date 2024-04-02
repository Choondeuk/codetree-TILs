#include <iostream>
using namespace std;
#define MAX 100
int arr[MAX+1][MAX+1] = {};
int n, m ,c, r;
bool Inrange(int y, int x){
    return(1 <= y && y <= n && 1 <= x && x <= n);
}
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int cnt = 0;
        cin >> r >> c;
        arr[r][c] = 1;
        for(int k = 0; k < 4; k++){
            int cy = r + dy[k];
            int cx = c + dx[k];
            if(Inrange(cy, cx) && arr[cy][cx] == 1)
                cnt++;
        }
        if(cnt == 3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}