#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;
  
  set<int> all;

  for (int i = 1; i*i <= n; i++) {
    all.insert(i*i);
  }

  for (int i = 1; i*i*i <= n; i++) {
    all.insert(i*i*i);
  }

  cout << all.size() << endl;
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


