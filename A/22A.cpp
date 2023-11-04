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

  sort(arr, arr + n);

  int ans = -1; 
  for (int i = 0; i < n; i++) {
    if (arr[i] == arr[0]) {
      continue;
    }
    else {
      ans = arr[i];
      break;
    }
  }

  if (ans == -1) {
    cout << "NO";
  }
  else {
    cout << ans;
  }


  return 0;
}

