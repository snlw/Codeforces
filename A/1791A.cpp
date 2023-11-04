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
    char c;
    cin >> c;

    bool present = false;

    string codeforces = "codeforces";
    for (int i = 0; i < codeforces.length(); i++) {
      if (codeforces[i] == c) {
        present = true;
        break;
      }
    }

    cout << (present ? "YES" : "NO") << endl;
  }

  return 0;
}


