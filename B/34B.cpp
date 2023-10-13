#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  int tv[n];

  for (int i = 0; i < n; i++) {
    cin >> tv[i];
  }

  sort(tv, tv + n);

  int ans = 0;

  for (int i = 0; i < m; i++) {
    if (tv[i] > 0){
      break;
    }
    ans -= tv[i];
  }

  cout << ans << endl;
  return 0;
}


