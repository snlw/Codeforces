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

    int oneBurleCoins = n/3;
    int twoBurleCoins = n/3;
    int remainder =  n % 3;

    if (remainder == 1) {
      oneBurleCoins++;
    }
    else if (remainder == 2){
      twoBurleCoins++;
    }

    cout << oneBurleCoins << " " << twoBurleCoins << endl;

  }

  return 0;
}


