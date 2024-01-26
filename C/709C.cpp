#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  string s;
  cin >> s;

  if (s.length() == 1) {
    if (s[0] == 'a') {
      cout << "z" << endl;
    }
    else {
      cout << s[0] - 1 << endl;
    }
    return;
  }

  bool swap = false;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != 'a') {
      s[i] -= 1;
      swap = true;
    }
    else {
      if (swap) {
        break;
      }
      else if (i == s.length() - 1) {
        s[i] = 'z';
      }
    }
  }

  cout << s << endl;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}


