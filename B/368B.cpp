
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m, in;
    cin >> n >> m;
    int a[n];
    vector<int> dp(n+1), count(100001);
    int distinct = 0;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    reverse(a, a+n);
    for (int i = 0; i < n; i++){
        count[a[i]]++;
        if (count[a[i]] == 1)
            distinct++;
        dp[n-i] = distinct;
    }
    while(m--){
        cin >> in;
        cout << dp[in] << endl;
    }
    return 0;
}
