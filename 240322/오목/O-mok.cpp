#include <iostream>
using namespace std;

int check(int x, int y){
    return (0 <= x && x < 19 && 0 <= y && y < 19);
}

int main() {
    int board[19][19] = {};
    for(int col = 0; col < 19; col++){
        for(int row = 0; row < 19; row++){
            cin >> board[col][row];
        }
    }

    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};

    for(int col = 0; col < 19; col++){
        for(int row = 0; row < 19; row++){
            if(board[col][row] == 0)    continue;

            for(int k = 0; k < 8; k++){
                int cnt = 1;
                int cur_x = row;
                int cur_y = col;
                while(true){
                    cur_x += dx[k];
                    cur_y += dy[k];

                    if(board[col][row] != board[cur_y][cur_x]){
                        break;
                    }
                    if(check(cur_x, cur_y) == false){
                        break;
                    }
                    cnt++;
                    if(cnt == 5){
                        cout << board[col][row] << endl;
                        cout << col + 2*dy[k] + 1 << " " << row + 2*dx[k] + 1;
                        return 0;
                    }
                }
            } 
        }
    }
    cout << 0;
    return 0;
}