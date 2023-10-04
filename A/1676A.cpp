#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t) {
    int sum = 0;

    for (int i = 0; i < 3; i++) {
      char f;
      cin >> f;
      sum += int(f);
    }

    for (int i = 0; i < 3; i++) {
      char s;
      cin >> s;
      sum -= int(s);
    }

    t--;

    cout << (sum == 0 ? "YES" : "NO") << endl;
  }
  

  return 0;
}


