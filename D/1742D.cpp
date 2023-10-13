#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int ans = -1;  

  for (int i = n - 2; i >= 0; i--) {
    if (__gcd(arr[n - 1], arr[i]) == 1) {
      ans = n + i + 1;
      break;
    }
  }

  cout << ans << endl;
  return;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t){
    solve();
    t--;
  }

  return 0;
}


