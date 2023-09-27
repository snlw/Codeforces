#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  if (s.find("H") != std::string::npos || s.find("Q") != std::string::npos || s.find("9") != std::string::npos){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}


