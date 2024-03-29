#include <iostream>
#include <string>
using namespace std;

int main() {
    // 문자열 배열을 구현합니다.
	string str[10];
	string str_all;
	int n;
	
	// n을 입력받습니다.
	cin >> n;
	
	// 공백 단위로 문자열을 입력받습니다.
	for(int i = 0; i < n; i++)
		cin >> str[i];
	
	// 문자열을 전부 붙입니다.
	for(int i = 0; i < n; i++) {
		str_all += str[i];
	}
	
	// 합쳐진 문자열의 길이를 구합니다.
	int len = str_all.length();
	
	// 합쳐진 문자열을 5개의 숫자마다 개행을 하여 출력합니다.
	for(int i = 0; i < len; i++) {
		cout << str_all[i];
		if(i % 5 == 4)
			cout << endl;
	}
	
    return 0;
}