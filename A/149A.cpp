#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int k;
  cin >> k;

  int ans = 0;

  if (k == 0) {
    cout << ans << endl;
    return 0;
  }

  int arr[12];

  for (int i = 0; i < 12; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + 12);

  for (int i = 11; i >= 0; i--) {
    if ( k <= 0 ){
      break;
    }
    k -= arr[i];
    ans++;
  }

  if (k > 0) {
    ans = -1;
  }

  cout << ans << endl;

  return 0;
}


