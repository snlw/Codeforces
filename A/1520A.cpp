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

    string s;
    cin >> s;

    map<char, bool>map;

    map[s[0]] = true;

    bool sus = true;

    for (int i = 1; i < n; i++) {
      if (s[i] != s[i - 1] ){
        if (map[s[i]]) {
          sus = false;
          break;
        }
      }
      map[s[i]] = true;
    }

    cout << (sus ? "YES" : "NO") << endl;
  }

  return 0;
}


