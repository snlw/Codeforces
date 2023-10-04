#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, a;
  cin >> n >> a;

  int ans = 1;
  int maxDays = 1;

  n--;

  while (n) {
    int nextday;
    cin >> nextday;

    if (nextday >= a) {
      ans++;
    }
    else {
      ans = 1;
    }

    a = nextday;

    maxDays = max(ans, maxDays);

    n--;
  }

  cout << maxDays << endl;

  return 0;
}


