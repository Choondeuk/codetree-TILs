#include <iostream>

using namespace std; 

int n,k;
#define N_MAX 100 + 1
#define NUM_MAX 10'000 + 1

char arr[NUM_MAX]; 
int prefix[NUM_MAX]; 

int GetSum(int x, int y){
    return prefix[y] - prefix[x-1];
}

int main() {
    cin>>n>>k;

    for(int i=1; i<=n; i++){
        int pos; char c; 
        cin>>pos>>c;
        if(c=='G')
            prefix[pos]++;
        else
            prefix[pos]+=2; 
    }
        
    for(int i=2; i<NUM_MAX; i++){
        prefix[i] += prefix[i-1];
    }
    
    int ans = 0; 
    for(int i=1; i<NUM_MAX-k; i++)
        ans = max(ans, GetSum(i, i+k));
    cout<<ans; 

    return 0;
}