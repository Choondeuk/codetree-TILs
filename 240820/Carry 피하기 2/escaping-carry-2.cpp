#include <iostream>
using namespace std;
#include <string>
int main() {
    int n;
    cin >> n;
    int a[n],max=-1,cnt=0;
   
    for(int i=0;i<n;i++){
        cin >>a[i];

    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if ((a[i]%10) +(a[j]%10) + (a[k]%10) <10){
                    if ((a[i]%100/10) +(a[j]%100/10) + (a[k]%100/10) <10){
                        if ((a[i]%1000/100) +(a[j]%1000/100) + (a[k]%1000/100) <10){
                            if ((a[i]/1000) +(a[j]/1000) + (a[k]/1000) <10){
                                cnt = a[i] + a[j] + a[k];
                                if(cnt > max && cnt!=0){
                                    max = cnt;
                                }
                            }
                        }
                    }
                }
                
            }
        }
    }
    cout << max;
    // 여기에 코드를 작성해주세요.
    return 0;
}