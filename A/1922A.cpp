#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;

  string a, b, c;
  cin >> a >> b >> c;

  bool exists = false;

  for (int i = 0; i < n; i++) {
    if ((a[i] != c[i] && b[i] != c[i])){
        exists = true;
        break;
    }
  }

  cout << (exists ? "YES" : "NO") << endl;
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


