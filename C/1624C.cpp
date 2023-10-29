#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  int found[n + 1];

  for (int i = 0; i <= n; i++) {
    found[i] = false;
  }

  for (int i = 0; i < n; i++) {
    while(arr[i] > 1 && (arr[i] > n || found[arr[i]] == true)) {
      arr[i] /= 2;
    }
    if (arr[i] > n || found[arr[i]] == true){
      cout << "NO" << endl;
      return;
    }
    found[arr[i]] = true;
  }
  cout << "YES" << endl;
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


