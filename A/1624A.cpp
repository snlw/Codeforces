#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    long long mn = 1000000001, mx = 0; 
    for (int i = 0; i < n; i++) {
      long long a;
      cin >> a;

      mn = min(mn, a);
      mx = max(mx, a);
    }

    cout << mx - mn << endl;
  }

  return 0;
}


