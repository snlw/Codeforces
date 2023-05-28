
#include<iostream>

using namespace std;
#define MAX 100005
long long dp[MAX];
long long count[MAX];
int main(){
    int n, x;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> x;
        count[x]++;
    }
    dp[0] = 0;
    dp[1] = count[1];
    for (int i = 2 ; i < MAX; i++){
        dp[i] = max(dp[i-1], dp[i-2]+i*count[i]);
    }
    cout << dp[MAX-1];


    return 0;
}


