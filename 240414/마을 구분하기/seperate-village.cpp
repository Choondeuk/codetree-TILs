#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 25
int cnt = 0;
int arr[MAX][MAX] = {};
int visited[MAX][MAX] = {};
int n;
vector<int> people;

bool Inrange(int y, int x){
    return (0 <= y && y < n && 0 <= x && x < n);
}
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void DFS(int y, int x){
    cnt++;
    for(int k = 0; k < 4; k++){
        int cur_x = x + dx[k];
        int cur_y = y + dy[k];
        if(!visited[cur_y][cur_x] && Inrange(cur_y, cur_x) && arr[cur_y][cur_x]){
            visited[cur_y][cur_x] = true;
            // cout << cur_x << " " << cur_y << " "<< endl;
            DFS(cur_y, cur_x);
        }
        
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j] && arr[i][j]){
                visited[i][j] = true;
                DFS(i, j);
                // cout << j << " " << i << endl; 
                people.push_back(cnt);
                cnt = 0;
            }
        }
    }
    sort(people.begin(), people.end());
    cout << people.size() << endl;
    for(int i = 0; i < people.size(); i++){
        cout << people[i] << endl; 
    }
    return 0;
}