#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main() {
    string n,b;
    cin >>n;
    b =n;

    int cnt = 0,max =0;
    for(int i=0;i<n.length();i++){
        if(n[i] == '1'){
            n[i] = '0';
        }
        else{
            n[i] = '1';
        }
  
        int B[n.length()];
        for(int j=0;j<n.length();j++){
            B[j] = n[j] - '0';
            cnt += B[j] * pow(2,n.length()-1-j);
           
        }

        if(cnt > max){
            max = cnt;
        }
        cnt=0;
        n = b;

    }
    cout << max;
    return 0;
}