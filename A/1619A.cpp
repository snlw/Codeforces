#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

bool solve() {
  string s;
  cin >> s; 

  // If string is odd number of chars, NO
  if (s.size() % 2 != 0) {
    return false;
  }

  int mid = s.size()/2;

  for (int i = 0; i < mid; i++) {
    if (s[i] != s[mid + i]){
      return false;
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
    bool isSquare = solve();

    cout << (isSquare ? "YES" : "NO") << endl;
  }

  return 0;
}


