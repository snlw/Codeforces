#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string number;
  cin >> number;

  for (int i = 0; i < number.size(); i++) {
    if (number[i] != '1' && number[i] != '4') {
      cout << "NO" << endl;
      return 0;
    }
    if (number[0] == '4') {
      cout << "NO" << endl;
      return 0;
    }
    if (number.find("444") != number.npos) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;


  return 0;
}


