#include <iostream>
#include <cmath>
using namespace std;
#define MAX 20
int main() {
    int n;
    int max_sum = 0;
    int arr[MAX] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < n; j++){ 
        for(int k = j+1; k < n; k++){
            for(int l = k+1; l < n; l++){
                int sum = 0;
                int temp[4] = {};
                bool carry_off = true;
                temp[0] = arr[j] % 10 + arr[k] % 10 + arr[l] % 10;
                temp[1] = arr[j] /10 % 10 + arr[k] /10 % 10 + arr[l] /10 % 10;
                temp[2] = arr[j] /100 % 10 + arr[k] /100 % 10 + arr[l] /100 % 10;
                temp[3] = arr[j] /1000 % 10 + arr[k] /1000 % 10 + arr[l] /1000 % 10;
                for(int t = 0; t < 4; t++){
                    if(temp[t] >= 10){
                        carry_off = false;
                        break;
                    }
                }
                if(carry_off == true){
                    sum = arr[j] + arr[k] + arr[l];
                    max_sum = max(max_sum, sum);
                }
            }
        }
    }
    cout << max_sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}


//1000*temp[3]+100*temp[2]+10*temp[1]+temp[0];