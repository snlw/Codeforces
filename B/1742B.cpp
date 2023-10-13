#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  bool ans = true;
  for (int i = 0; i < n - 1; i++) {
    if(arr[i] == arr[i + 1]) {
      ans = false;
      break;
    }
  }

  cout << (ans ? "YES" : "NO") << endl;

  return;
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


