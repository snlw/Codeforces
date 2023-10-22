#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n, p, q, r;
  cin >> n >> p >> q >> r;

  long long a[100005];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long dp[100005][3];
  dp[0][0] = p*a[0];
  for (int i = 1; i <= n; i++) {
    dp[i][0] = max(dp[i-1][0], p*a[i]);
  }

  dp[0][1] = dp[0][0]+ q*a[0];
  for (int i = 1; i <= n; i++) {
    dp[i][1] = max(dp[i-1][1], dp[i][0] + q*a[i]);
  }

  dp[0][2] = dp[0][1]+ r*a[0];
  for (int i = 1; i <= n; i++) {
    dp[i][2] = max(dp[i-1][2], dp[i][1] + r*a[i]);
  }

  cout << dp[n-1][2] << endl;

  return 0;
}

