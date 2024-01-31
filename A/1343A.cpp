#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;

  for (int k = 2; k < 30; k++) {
    int a = pow(2,k) - 1;
    if (n % a == 0) {
      cout << n/a << endl;
      return;
    }
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


