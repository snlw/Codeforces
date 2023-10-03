#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  cin >> n >> m;
  
  cout << (min(n,m) % 2 == 0 ? "Malvika" : "Akshat") << endl;

  return 0;
}


