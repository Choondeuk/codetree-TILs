#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string arr[10];
    string temp = "";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        temp += arr[i];
    }
    int cnt = 0;
    for(int j = 0; j < temp.length(); j++){
        cout << temp[j];
        cnt++;
        if(cnt == 5){
            cout << endl;
            cnt = 0;
        }

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}