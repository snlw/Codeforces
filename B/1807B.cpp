#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int even = 0;
  int odd = 0;

  for (int i = 0; i < n; i++) {
    int candy;
    cin >> candy;
    if (candy % 2 == 0) {
      even += candy;
    }
    else {
      odd += candy;
    }
  }

  cout << (even > odd ? "YES" : "NO") << endl;
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


