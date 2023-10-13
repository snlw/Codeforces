#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  int ans = n;

  while(n >= m){
    ans += n/m;

    n = n/m + n%m;
  }

  cout << ans << endl;

  return 0;
}


