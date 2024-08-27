#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>a[i][j]; 
        }
    }
    int sum =0,max = 0;
    for(int i=0;i<n-1;i++){
        for(int x=0;x<m-1;x++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                sum += a[i+j][x+k];
            }
        }
        for(int y=0;y<2;y++){
            for(int z=0;z<2;z++){
                sum = sum - a[i+y][x+z];
                if(sum > max){
                    max = sum;
                }
                sum = sum + a[i+y][x+z];
            }
        }
        sum = 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m-2;j++){
            for(int k=0;k<3;k++){
                sum+= a[i][j+k];
            }
            if(sum > max){
                max = sum;
        }
            sum = 0;
        }
    }
    cout << max;

    return 0;
}