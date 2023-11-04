#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  long long n, q;
  cin >> n >> q;
  long long arr[200000], preCompute[200000];
  long long sum = 0;
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
    sum += arr[i];
    preCompute[i] = preCompute[i - 1] + arr[i];
  }
  // For each query
  for (int i = 0; i < q; i++) {
    long long l, r, k;
    cin >> l >> r >> k;
    long long ans = preCompute[n]- (preCompute[r] - preCompute[l-1]) + k*(r-l+1);
    cout << (ans % 2 == 1 ? "YES" : "NO") << endl;
  }
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}

