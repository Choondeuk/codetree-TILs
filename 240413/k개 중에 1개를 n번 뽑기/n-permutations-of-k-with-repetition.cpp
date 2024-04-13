#include <iostream>
#include <vector>
using namespace std;
int k, n;
vector<int> nums;
void Print(){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void Permut(int cnt){
    if(cnt == n){
        Print();
        return;
    }
    for(int i = 1; i <= k; i++){
        nums.push_back(i);
        Permut(cnt+1);
        nums.pop_back();
    }
}
int main() {
    cin >> k >> n;
    Permut(0);
    // 여기에 코드를 작성해주세요.
    return 0;
}