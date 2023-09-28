#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int arr[n];

    for (int j = 0; j < n; j++) {
      cin >> arr[j];
    }

    sort(arr, arr + n);

    int maxProduct = arr[0] + 1;

    for (int j = 1; j < n; j++) {
      maxProduct *= arr[j];
    }

    cout << maxProduct << endl;

  }

  return 0;
}


