#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    int len = str.length();
    for(int i = len - 1; i >= len - n; i--){
        cout << str[i];
    }
        // 여기에 코드를 작성해주세요.
    return 0;
}