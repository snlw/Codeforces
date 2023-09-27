#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n, k;

  cin >> n >> k;

  if (k <= (n+1)/2) {
    cout << 2*k - 1 << endl;
  }
  else {
    cout << 2*(k - (n+1)/2) << endl;
  }

  return 0;
}


