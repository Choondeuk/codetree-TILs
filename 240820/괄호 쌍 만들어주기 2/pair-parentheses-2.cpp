#include <iostream>
using namespace std;
#include <string>
int main() {
    string str;
    cin >> str;
    int cnt=0;

    for(int i=0;i<str.length()-1;i++){
        if (str[i] == '(' && str[i+1] == '('){
            for(int j=i;j<str.length()-1;j++){
                if(str[j] == ')' && str[j+1]==')'){
                    cnt++;
                }
            }
        }
    }
    cout <<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}