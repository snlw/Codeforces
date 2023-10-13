#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int sum = a + b + c;
  if (sum % 2 != 0) {
    cout << "NO" << endl;
    return;
  }

  if (sum/2 == a || sum/2 ==b || sum/2 ==c) {
    cout << "YES" << endl;
    return;
  }

  cout << "NO" << endl;
  return;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t){
    solve();
    t--;
  }

  return 0;
}


