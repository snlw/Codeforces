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
    int count = 0;

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < b){
      count++;
    }
    if (a < c) {
      count++;
    }
    if (a < d) {
      count++;
    }

    cout << count << endl;
  }

  return 0;
}


