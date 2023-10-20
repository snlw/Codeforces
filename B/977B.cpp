#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string s;
  cin >> n >> s;

  int idx = 0;
  int mx = -1;

  for (int i = 0; i < n-1; i++) {
    int count = 0;
    for (int j = 0; j < n -1; j++) {
      if (s[j] == s[i] && s[j+1] == s[i+1]) {
        count++;
      }
    }
    if (count > mx) {
      idx = i;
      mx = count;
    }
  }

  cout << s[idx] << s[idx + 1] << endl;

  return 0;
}


