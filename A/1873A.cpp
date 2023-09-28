#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;

    int swaps = 0;
    if (S.at(0) != 'a') {
      swaps++;
    }
    if (S[1] != 'b') {
      swaps++;
    }
    if(S[2] != 'c') {
      swaps++;
    }

    if (swaps == 2 || swaps == 0){
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}


