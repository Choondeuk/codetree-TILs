#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if(a+b == b+a)
        cout << "true";
    else
        cout << "false";    // 여기에 코드를 작성해주세요.
    return 0;
}