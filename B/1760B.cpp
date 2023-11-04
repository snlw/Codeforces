#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    
    int ans = -1;

    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      ans = max(ans, int(c) - 96);
    }

    cout << ans << endl;
  }

  return 0;
}


