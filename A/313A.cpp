#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int mx = n;
  
  // Remove last digit
  mx = max(mx, n/10);

  // Remove second last 
  mx = max(mx, n%10 + (n/100)*10);

  cout << mx << endl;


  return 0;
}


