#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str[10];
    char ch = 'a';
    int cnt = 0;
    int len = 0;
    for(int i = 0; i < n; i++){
        cin >> str[i]; 
    }
    for(int i = 0; i < n; i++){
        if(str[i][0] == ch)    cnt++;
        len += str[i].length();
    
    }

    cout << len << " "<< cnt;
    return 0;
}