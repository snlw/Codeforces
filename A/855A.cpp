#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  string arr[n];
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    bool existed = false;
    for (int j = 0; j < i; j++ ){
      if (arr[j] == s) {
        existed = true;
        break;
      }
    }

    cout << (existed ? "YES" : "NO") << endl;
  }

  return 0;
}

