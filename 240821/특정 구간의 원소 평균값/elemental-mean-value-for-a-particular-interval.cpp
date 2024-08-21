#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    double mean=0;
    int cnt = 0;
    for(int i=1;i<N+1;i++){
        for(int j=0;j<N-i+1;j++){
            mean = 0;
            for(int k=0;k<i;k++){
                mean += (double)a[j+k];
            }
            mean = (double)mean / (double)i;
            for(int x=j;x<j+i;x++){
                if(a[x] == mean){
                    cnt++;
                    break;
                }
            }
            
        }
    }
    cout << cnt;

    
    // 여기에 코드를 작성해주세요.
    return 0;
}