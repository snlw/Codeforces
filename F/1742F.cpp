#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int q;
  cin >> q;

  bool otherA = false, otherB = false;
  long long countA = 0, countB = 0;

  while (q--) {

    int d, k;
    cin >> d >> k;

    string x;
    cin >> x;

    for (auto c: x) {
      if (d == 1) {
        if (c != 'a') {
          otherA = true;
        }
        else {
          countA += k;
        }
      }
      else {
        if (c != 'a') {
          otherB = true;
        }
        else {
          countB += k;
        }
      }
    }

    if (otherB || (!otherA && countA < countB)) {
        cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}
   
    


int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t) {
    solve();
    t--;
  }

  return 0;
}


