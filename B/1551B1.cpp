#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {

  int count[26] = { 0 };
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    count[s[i] - 'a']++;
  }

  int c1 = 0; // Only 1 occurrence
  int c2 = 0; // More than 1 occurence

  for (int i = 0; i < 26; i++) {
    if (count[i] == 1) {
      c1++;
    }
    else if (count[i] > 0) {
      c2++;
    }
  }

  cout << (c2 + c1/2) << endl;

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


