#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n][2],B[n][2];
    for(int i=0;i<n;i++){
        cin >>A[i][0]>>A[i][1];
        B[i][0] = A[i][0];
        B[i][1] = A[i][1];
    }
    int min,cnt=0;
    int a,b;
    

    for(int i=0;i<n-1;i++){
        for(int k=0;k<n;k++){
        A[k][0] = B[k][0];
        A[k][1] = B[k][1];
    }
        
        for(int j=0;j<n-1;j++){
            if (j==i)
            {
                A[j+1][0] = A[j][0];
                A[j+1][1] = A[j][1];
                continue;
            }
            else{
            a = A[j+1][0] - A[j][0];
            b = A[j+1][1] - A[j][1];
            }
            if (a<0){
                a = a-2*a;
            }
            if(b<0){
                b = b-2*b;
            }
            cnt+=a+b;
            
        }
      
        if(cnt<min || i == 0){
            min = cnt;
        }
        cnt = 0;
    }
    cout << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}