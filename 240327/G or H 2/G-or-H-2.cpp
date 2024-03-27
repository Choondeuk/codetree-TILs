#include <iostream>
using namespace std;
#define MAX 101
int main() {
    int n, place;
    int max_size = 0;
    char c;
    char arr[MAX] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> place >> c;
        arr[place] = c;
    }
    for(int i = 0; i <= 100; i++){
        for(int j = i; j <= 100; j++){
            int G = 0, H = 0;
            int size = 0;
            for(int k = i; k <= j; k++){
                if(arr[k] == 'G')   G++;
                else if(arr[k] == 'H')  H++;
            }
            // 조건 만족시
            if(arr[i] != 0 && arr[j] != 0 && (G == H || G == 0 || H == 0)){
                size = j-i;
                max_size = max(max_size,size);
            }
        }
    }
    cout << max_size;
    // 여기에 코드를 작성해주세요.
    return 0;
}