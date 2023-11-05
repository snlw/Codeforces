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

  int leftMost = 0;
  for(int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      leftMost = i;
      break;
    }
  }


  int rightMost = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] == 1){
      rightMost = i;
      break;
    } 
  }

  int ans = 0;
  for (int i = leftMost + 1; i < rightMost; i++ ) {
    if (arr[i] == 0){
      ans++;
    }
  }
  cout << ans << endl;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--){
    solve();
  }

  return 0;
}


