#include <iostream>
using namespace std;
#define MAX 10000
int main() {
    // 여기에 코드를 작성해주세요.
    int N,K;
    cin >> N >>K;
    int a[N];
    char b[N];
    int c[MAX]={0};
    int max=0,cnt=0;
    int num=0;

    for(int i=0;i<N;i++){
        cin >> a[i] >> b[i];
        if(a[i]>num){
            num = a[i];
        } 
        if(b[i]=='G'){
            c[a[i]-1] = 1;
        }
        else if (b[i] == 'H'){
            c[a[i]-1] = 2;
        }
    }
    for(int i =0;i<MAX;i++){
        for(int j=0;j<K+1&&i+j<10000;j++){
            cnt+=c[i+j];
        }
        if(cnt>max){
            max = cnt;
        }
        cnt = 0;
    }
    cout << max;
    return 0;
}