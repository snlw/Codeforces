#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t) {
    int n;
    cin >> n ;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int ans = -1;

    // First Element 
    if (arr[0] != arr[1] && arr[0] != arr[2]) {
      ans = 1;
    }
    else if (arr[n - 1] != arr[n - 2] && arr[n - 1] != arr[n - 3]){
      ans = n;
    }
    else {
      for (int i = 1;  i < n - 1; i++) {
        if (arr[i] != arr[i+1] && arr[i] != arr[i-1]){
          ans = i + 1;
          break;
        }
      }
    }

    cout << ans << endl;

    t--;
  }

  return 0;
}


