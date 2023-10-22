#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  
  int l = 0, r = 0;
  for (int i = 0; i < n; i++) {
    int li, ri;
    cin >> li >> ri;
    l += li;
    r += ri;
  }

  int minLeft = min(n-l, l);
  int minRight = min(n-r, r);

  cout << minLeft + minRight << endl;
  return 0;
}

