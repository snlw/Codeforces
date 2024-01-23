#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int zeros = 0;
  int ones = 0;

  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (c == '0') {
      zeros++;
    }
    else {
      ones++;
    }
  }

  cout << abs(zeros - ones) << endl;

  return 0;
}


