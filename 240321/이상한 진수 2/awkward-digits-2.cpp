#include <iostream>
#include <climits>

using namespace std;

int main() {
    string bin;
    int max_num = 0;
    cin >> bin;
    for(int i = 0; i < bin.size(); i++){
        bin[i] = '0'+'1' - bin [i];
        int num = 0;
        for(int j = 0; j < bin.size(); j++){
            num = num*2 + (bin[j]-'0');
        }
        max_num = max(max_num, num);
        bin[i] = '0' + '1' - bin [i];
    }
	cout << max_num;
    return 0;
}