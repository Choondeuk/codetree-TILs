#include <iostream>
using namespace std;

int main() {
    int S,N;
    cin >>N>>S;
    int a[N];
    int all = 0;
    int ex = 0, min = 10000,cnt;
    for(int i=0;i<N;i++){
        cin >> a[i];
        all += a[i];
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            ex = a[i] + a[j];
            cnt = S - (all - ex);
            if(cnt<0){
                cnt = -1 * cnt;
            }
            if(cnt<min){
                min = cnt;
            }
        }
    }
    cout << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}