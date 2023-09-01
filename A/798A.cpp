#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  int mismatchCount = 0;


  for (int i = 0; i < s.length()/2; i++){
    if (s[i] != s[s.length() - i - 1]){
      mismatchCount++;
    }
    if (mismatchCount > 1) {
      break;
    }
  }

  if (s.length() % 2 != 0 && mismatchCount == 0){
    cout << "YES" << endl;
  }
  else {
    cout << (mismatchCount == 1 ? "YES" : "NO") << endl;
  }
  return 0;
}


