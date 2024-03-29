#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;

    int st_idx = -1;
    if(a.find(b) != string::npos)
        st_idx = a.find(b);

    cout << st_idx;



return 0;
}