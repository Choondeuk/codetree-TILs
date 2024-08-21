#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N,T,H;
    cin >> N >> T >> H;
    int a[N];
    for(int i=0;i<N;i++){
        cin >>a[i];
    }
    int ud=0,cnt =0;
    int min = 10000;
    for(int i=0;i<N-T+1;i++){
        ud = 0;
        for(int j=0;j<T;j++){
            if(a[i+j]<T){
                ud += T-a[i+j];
            }
            else if(a[i+j]>T){
                ud += a[i+j]-T;
            }
        }
        if(ud <min){
            min = ud;
        }
    }
    cout <<min;

    return 0;
}