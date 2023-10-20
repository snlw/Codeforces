#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  
  while(t--) {
    int n;
    cin >> n;

    // n = 2020x + 2021y = 2020(x+y) + y
    int y = n % 2020;

    // x = (n-y)/2020 - y
    int x = (n - y)/2020 - y;
    if (x >= 0) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}

