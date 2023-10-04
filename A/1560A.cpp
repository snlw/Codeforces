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
    int i;
    cin >> i;

    int ans = 0;

    while(i) {
      ans++;

      if ((ans % 3 == 0) || (ans % 10 == 3) || (ans % 100 == 3) || ans % 1000 == 3) {
        continue;
      }

      i--;
    }

    cout << ans << endl;

    t--;
  }

  return 0;
}


