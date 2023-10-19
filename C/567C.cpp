#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  int n, k;
  cin >> n >> k;

  long long ans = 0;

  long long arr[200005] = { 0 };
  map<long long, long long> left, right;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    right[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    long long ll = 0, rr = 0;
    if (arr[i] % k == 0) {
      ll = left[arr[i] / k];
    }
    right[arr[i]]--;
    rr = right[arr[i] * k];

    ans += ll * rr;
    left[arr[i]]++;

  }

  cout << ans << endl;

  return 0;
}


