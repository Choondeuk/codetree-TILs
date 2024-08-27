#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int a[N][N];
    for(int i =0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> a[i][j];
        }
    }
    int cnt =0;
    int max=0;
    for(int k=0;k<N-2;k++){
        for(int z=0;z<N-2;z++){
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (a[i+k][z+j] == 1){
                cnt ++;
            }
        }
        
    }
    if(cnt > max ){
            max = cnt;
        }
        cnt =0;
        }
    }
    cout << max;
  
    return 0;
}