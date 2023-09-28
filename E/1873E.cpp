#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  
  for (int i = 0; i < t; i++){
    int n;
    long long x;
    cin >> n >> x;

    long long a[n];
    for (int j = 0; j < n; j++){
      cin >> a[j];
    }

    long long l = 0, h = 2'000'000'007;
    while (l < h) {
      long long m = l + (h - l + 1) / 2;
      long long total = 0;
      for (int j = 0; j < n; j++) {
        total += max(m - a[j], 0LL);
      }
      if (total <= x) {
        l = m;
      }
      else {
        h = m - 1;
      }
    }

    cout << l << endl;

  }

  return 0;
}


