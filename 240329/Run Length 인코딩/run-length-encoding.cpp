#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a;
    b = a[0];
    int len = a.length();
    int prev = 0;
    int cnt = 1;
    for(int i = 1; i <= len; i++){
        if(a[prev] == a[i]){
            cnt++;
        }
        else    {
            b += to_string(cnt) + a[i];
            cnt = 1;
        }
        prev = i;
        
    }
    cout << b.length()-1 << endl << b;
    return 0;
}