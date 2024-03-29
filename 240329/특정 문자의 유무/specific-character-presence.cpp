#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    if(a.find("ee") == string::npos)   cout << "No";
    else    cout << "Yes";
    if(a.find("ab") == string::npos)   cout << " " << "No";
    else    cout << " " << "Yes";

    return 0;
}