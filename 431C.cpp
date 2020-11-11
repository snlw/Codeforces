// https://codeforces.com/contest/431/submission/21057698
#include<iostream>
#include<cstring> //memset

using namespace std;

int dp[102][2];
int n, k, d;
const int mod = 1e9 + 7;

int foo(int sum, int check){
    // sum: sum of paths
    // check: true if path contains an edge of minimum d
    if (sum > n)
        return 0;
    if (sum == n){
        if (check)
            return 1;
        else
            return 0;
    }
    if (dp[sum][check] != -1)
        return dp[sum][check];
    // sum < n (search for edge in smaller tree)
    int ans = 0;
    for (int i = 1; i <= k; i++){
        if (i >= d)
            ans = (ans + foo(sum+i, 1))%mod;
        else
            ans = (ans + foo(sum+i, check))%mod;
    }
    dp[sum][check] = ans;
    return dp[sum][check];
}

int main(){
    cin >> n >> k >> d;
    memset(dp, -1, sizeof(dp));

    cout << foo(0,0) << "\n";
    return 0;
}


