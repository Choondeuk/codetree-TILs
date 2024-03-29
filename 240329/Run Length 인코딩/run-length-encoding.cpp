#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a;
    int len = a.length();
    b = "";
    int cnt = 1;
    char cur_a = a[0];
    for(int i = 1; i < len; i++){
        if(a[i] == cur_a)
            cnt++;
        else{
            b += cur_a + to_string(cnt);
            cnt = 1;
        }
        cur_a = a[i];
    }
    //cb cc
    b += cur_a + to_string(cnt);
    cout << b.length() << endl << b;
    return 0;
}