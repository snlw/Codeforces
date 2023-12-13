#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

void solve(){
  string s;
  cin >> s;

  int a = s[0] - '0';
  int b = s[2] - '0';

  int sum = a + b;
  cout << sum << endl;
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


