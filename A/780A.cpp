#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int arr[2*n];

  map<int, int>map;

  for (int i = 0; i < 2*n; i++) {
    cin >> arr[i];
    map[arr[i]] = 0;
  }

  int count = 0, ans = 0;

  for (int i = 0; i < 2*n; i++) {
    if (map[arr[i]] == 0) {
      count++;
      map[arr[i]]++;
    }
    else {
      count--;
      map[arr[i]]--; // Back to 0
    }
    ans = max(ans, count);
  }

  cout << ans << endl;

  return 0;
}


