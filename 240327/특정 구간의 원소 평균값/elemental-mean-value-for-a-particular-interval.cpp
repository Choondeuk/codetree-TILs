#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int n;
    int arr[MAX] = {};
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            double avg = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            avg = double(sum) / (j-i+1);
            for(int k = i; k <= j; k++){
                // 
                if(avg == arr[k])   {
                    cnt++;
                    break;
                }
                
            }

        }
    }
    cout << cnt;
    return 0;
}