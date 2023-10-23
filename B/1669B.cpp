#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    int arr[200005] = {0};
    int ans = 0;

    for (int i = 0; i < n; i++) {
      int value;
      cin >> value;
      arr[value]++;

      if (arr[value] == 3) {
        ans = value;
      }
    }

    cout << (ans == 0 ? -1 : ans) << endl;
  }

  return 0;
}


