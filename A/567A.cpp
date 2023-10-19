#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    int mx, mn;
    if (i == 0) {
      mn = abs(arr[i] - arr[i+1]);
      mx = abs(arr[i] - arr[n-1]);
    }
    else if (i == n - 1) {
      mn = abs(arr[i] - arr[i - 1]);
      mx = abs(arr[i] - arr[0]);
    }
    else {
      mn = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i+1]));
      mx = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n-1]));
    }

    cout << mn << " " << mx << endl;
  }

  return 0;
}


