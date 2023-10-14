#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

void solve() {
  int n;
  cin >> n;

  map<long long, long long>map;

  long long arr[n];

  long long mx = 0;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    map[arr[i]] = i;
  }

  for (auto x: map) {
    for (auto k: map) {
      if (__gcd(k.first, x.first) == 1) {
        mx = max(mx, (k.second + x.second));
      }
    }
  }

  cout << (mx ? mx : -1) << endl;
  return;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t){
    solve();
    t--;
  }

  return 0;
}


