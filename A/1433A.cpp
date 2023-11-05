#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve(){
  int x;
  cin >> x;
  
  int ans = ((x%10)-1)*10;
  
  int xCopy = x;
  int digits = 0;
  while(xCopy) {
      xCopy /= 10;
      digits++;
  }
  
  for (int i = 1; i <= digits; i++) {
      ans += i;
  }
  cout << ans << endl;
  
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



