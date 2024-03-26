#include <iostream>
using namespace std;
#define MAX 10000
int main() {
    int N, K;
    cin >> N >> K;
    int n;
    char c;
    int max_score = 0, score = 0;
    int map[MAX+1] = {};
    for(int i = 0; i < N; i++){
        cin >> n >>  c;
        if(c == 'G')    map[n] = 1;
        else    map[n] = 2;
    }

    for(int i = 1; i <= MAX+1-K; i++){
        for(int j = i; j < i+K+1; j++){
            score += map[j];
        }
        max_score = max(max_score, score);
        score = 0;
    }
    cout << max_score;
    return 0;
}