#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int moves = 0;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    while(n) {
        if (n % 6 == 0) {
            n /= 6;
            moves++;
        }
        else if (n % 3 == 0) {
            n /= 3;
            moves += 2;
        }
        else {
            break;
        }
    }

    if (n == 1) {
        cout << moves << endl;
    }
    else {
        cout << -1 << endl;
    }
    return;
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


