#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    int cnt = 0;
    int len = str.length();
    for(int i = len - 1; i >= 0; i--){
        cout << str[i];
        cnt++;
        if(cnt == n)    break;
    }
        // 여기에 코드를 작성해주세요.

    return 0;
}