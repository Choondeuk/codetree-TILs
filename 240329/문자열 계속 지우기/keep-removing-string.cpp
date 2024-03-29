#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int a_len = a.length();
    int b_len = b.length();
    
    while(1){
        bool exist = false;
        for(int i = 0; i < a_len - b_len + 1; i++){
            bool same = true;
            for(int j = 0; j < b_len; j++){
                if(a[i+j] != b[j])  same = false;
            }
            if(same == true){
                a = a.substr(0,i) + a.substr(i+b_len);
                exist = true;
                break;
            }
        }
        if(exist == false)  break;
    }
    

    cout << a;
    return 0;
}