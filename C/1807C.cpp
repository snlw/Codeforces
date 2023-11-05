#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

bool solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  for (int i = 0; i < n; i++) {
    bool isEven = (i % 2 == 0);
    for (int j = i + 1; j < n; j++) {
      if (s[j] == s[i])  {
        if ((isEven && j % 2 != 0) || (!isEven && j % 2 == 0)){
          return false;
        }
      }
    }
  }

  return true;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--) {
    bool canDo = solve();
    cout << (canDo ? "YES" : "NO") << endl;
  }

  return 0;
}


