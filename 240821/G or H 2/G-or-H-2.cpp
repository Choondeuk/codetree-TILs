#include <iostream>
using namespace std;

int main() {
    int N;
    cin >>N;
    char L;
    int loc;
    int a[100] = {0};
    for(int i=0;i<N;i++){
        cin >> loc >> L;
        if (L == 'G'){
            a[loc-1] = 1;
        }
        else if (L == 'H'){
            a[loc-1] = 2;
        }
    }
    int cnt1=0,cnt2=0;
    int max=0;
    int eq1 = 0, eq2 = 0;
    int emax1=0,emax2=0;

    for(int i=0;i<100;i++){
        if(a[i] == 1){
            for(int j=i+1;j<100;j++){
                if(a[j]==1){
                    cnt1 = j-i;
                }
                if(a[j]==2){
                    break;
                }
            }
        }
        if(a[i] == 2){
            for(int j=i+1;j<100;j++){
                if(a[j]==2){
                    cnt2 = j-i;
                }
                if(a[j]==1){
                    break;
                }
            }
        }
        if(cnt1>max){
            max = cnt1;
        }
        if(cnt2>max){
            max = cnt2;
        }
        cnt1 = 0;
        cnt2 = 0;
    }

    for(int i=0;i<100;i++){
        if(a[i]==1 || a[i]==2){
            for(int j=i;j<100;j++){
                if (a[j]==1){
                    eq1++;
                }
                else if (a[j]==2){
                    eq2++;
                }
                if(eq1 == eq2 && a[j]!=0){
                    emax1 = j-i;
                  
                }
            }
        }
        if(emax1>emax2){
            emax2 = emax1;
        }
        eq1 = 0;
        eq2 = 0;
    }
    if(max>emax2){
        cout<<max;
    }
    else{
        cout<<emax2;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}