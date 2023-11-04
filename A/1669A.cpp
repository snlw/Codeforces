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
    int rating;
    cin >> rating;

    int div;

    if (rating < 1400) {
      div = 4;
    }
    else if (rating < 1600) {
      div = 3;
    }
    else if (rating < 1900) {
      div = 2;
    }
    else {
      div = 1;
    }

    cout << "Division " << div << endl;
  }

  return 0;
}


