#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int x, y;
  bool found = false;

  for (int i = 1; i <= 8; i++) {
    string row;
    cin >> row;
    if (!found) {
      for (int j = 0; j < 6; j++) {
        if (row[j] == '#' && row[j+1] == '.' && row[j+2] == '#'){
          y = j + 1 + 1;
          x = i + 1;
          found = true;
          break;
        }
      }
    }
  }
  cout << x << " " << y << endl;
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


