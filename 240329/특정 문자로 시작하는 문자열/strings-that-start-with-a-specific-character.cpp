#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string str[20];
    cin >> n;
    char ch;
    int cnt = 0, len = 0;
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }
    cin >> ch;
    for(int i = 0; i < n; i++){
        if(str[i][0] == ch){
            cnt++;
            len += str[i].length();
        }
    }
    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << double(len)/cnt;
    return 0;
}