#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  string ans = "B";

  for (int i = 0; i < 8; i++) {
    string s;
    cin >> s;

    if (s == "RRRRRRRR"){
      ans = "R";
    }
  }

  cout << ans << endl;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t) {
    solve();
    t--;
  }

  return 0;
}


