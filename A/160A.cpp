#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  
  int coins[n];
  int sum = 0;
  int taken = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    cin >> coins[i];
    sum += coins[i];
  }

  sort(coins, coins + n);

  for (int i = n - 1; i >= 0; i--) {
    taken += coins[i];
    sum -= coins[i];
    count++;

    if (taken > sum){
      break;
    } 
  }

  cout << count << endl;

  return 0;
}


