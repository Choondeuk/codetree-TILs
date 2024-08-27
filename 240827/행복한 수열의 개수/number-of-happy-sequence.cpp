#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >>m;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j]; 
        }
    }
    int cnt1 =1,cnt2=0,cnt3 = 1;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i][j-1] == a[i][j]){
                cnt1++;
            }
            if(cnt1 > cnt3){
                cnt3 = cnt1;
            }
            if(a[i][j-1] != a[i][j]){
                cnt1 = 1;
            }
        }       
        if(cnt3>=m){
            cnt2++;
        }
        cnt3 = 1;
        cnt1 = 1;
    }
    for(int j=0;j<n;j++){
        for(int i=1;i<n;i++){
            if(a[i-1][j] == a[i][j]){
                cnt1++;
            }
            if(cnt1 > cnt3){
                cnt3 = cnt1;
            }
            if(a[i-1][j] != a[i][j]){
                cnt1 = 1;
            }
        }       
        if(cnt3>=m){
            cnt2++;
        }
        cnt3 = 1;
        cnt1 = 1;
    }
    cout << cnt2;

    return 0;
}