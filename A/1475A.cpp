#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--){
    int64_t n;
    cin >> n;
    while(n){
      if (n % 2 == 0){
        n = n/2;
        continue;
      }
      if (n > 1 && n % 2 == 1) {
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
      break;
    }
  }

  return 0;
}

