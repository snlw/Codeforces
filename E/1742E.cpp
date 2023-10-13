#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  long long n, q;
  cin >> n >> q;

  long long steps[n];

  for (int i = 0; i < n; i++) {
    cin >> steps[i];
  }

  for (int i = 0; i < q; i++) {
    long long qn;
    cin >> qn;

    long long ans = 0;
    for (int j = 0; j < n; j++) {
      if (qn >= steps[j]) {
        ans += steps[j];
      }
      else {
        break;
      }
    }

    cout << ans << " ";
  }

  cout << endl;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t) {
    solve();
    t--;
  }

  return 0;
}


