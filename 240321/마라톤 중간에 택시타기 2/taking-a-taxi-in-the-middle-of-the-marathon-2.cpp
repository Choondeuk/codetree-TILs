#include <iostream>
using namespace std;
#define MAX 100
int main(){
    int n;
    cin >> n;
    int x_arr[MAX];
    int y_arr[MAX];
    int min_dis = 100000;
    for(int i = 0; i < n; i++){
        cin >> x_arr[i]>> y_arr[i];
    }
    for(int j = 1; j < n - 1; j++){
        int dis = 0;
        int prev = 0;
        for(int k = 0; k < n; k++){
            if(k == j)  continue;
            dis += abs(x_arr[prev]-x_arr[k])+abs(y_arr[prev] - y_arr[k]);
            prev = k;
        }
        min_dis = min(min_dis, dis);
    }
    cout << min_dis;
    return 0;
}