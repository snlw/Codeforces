#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int gears[n];
  
  for (int i = 0; i < n; i++) {
    cin >> gears[i];
  }
  
  int pushes = n - gears[0];

  bool exists = true;

  for (int i = 1; i < n; i++) {
    int gear;

    if (i % 2 == 1) {
      gear = gears[i] - pushes;
      if (gear < 0) {
        gear += n;
      }
    }
    else {
      gear = gears[i] + pushes;
      if (gear > n - 1) {
        gear -= n;
      }
    }

    if (gear != i) {
      exists = false;
      break;
    }
  }

  cout << (exists ? "Yes" : "No") << endl;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}


