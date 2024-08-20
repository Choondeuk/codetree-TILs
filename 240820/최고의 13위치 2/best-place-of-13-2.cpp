#include <iostream>
using namespace std;
#include <string>
int main() {
    int N;
    cin >> N;
    int a[N][N];
    for(int i =0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> a[i][j];
        }
    }
    int max=0,cnt=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N-2;j++){
            cnt = a[i][j] + a[i][j+1] + a[i][j+2];
            for(int k=i+1;k<N;k++){
                for(int z=0;z<N-2;z++){
                    cnt += a[k][z] + a[k][z+1] + a[k][z+2];
                    if(cnt>max){
                        max = cnt;
                    }
                    cnt = a[i][j] + a[i][j+1] + a[i][j+2];
                }
            }
            
        }
    }
    if(N>5){
    for(int i=0;i<N-5;i++){
        for(int j=0;j<N-5;j++){
            cnt = a[i][j] + a[i][j+1] + a[i][j+2];
        for(int k=j+3;k<N-2;k++){
            cnt += a[i][k] + a[i][k+1] + a[i][k+2];
            if(cnt>max){
                max = cnt;
            }
            cnt = a[i][j] + a[i][j+1] + a[i][j+2];
        }
    }
    }}

    cout <<max;



    // 여기에 코드를 작성해주세요.
    return 0;
}