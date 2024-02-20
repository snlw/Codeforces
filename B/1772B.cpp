#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int arr[4];
  int mn = 100;
  int mx = 0;
  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
    mn = min(mn, arr[i]);
    mx = max(mx, arr[i]);
  }

  int minIndex = -1;
  int maxIndex = -1;

  for (int i = 0; i < 4; i++) {
    if (arr[i] == mn) {
      minIndex = i;
    }

    if (arr[i] == mx) {
      maxIndex = i;
    }
  }

  cout << ((maxIndex + minIndex) == 3 ? "YES" : "NO") << endl;
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


