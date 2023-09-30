#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  string ans = "";

  int pointer = 0;
  bool addSpace = false;

  while (pointer < s.size()) {
    if (s[pointer] == 'W' && s[pointer+1] == 'U' && s[pointer+2] =='B') {
      if (pointer != 0)  {
        addSpace = true;
      }
      pointer += 3;
    }
    else {
      if (addSpace) {
        ans += " ";
        addSpace = false;
      }
      ans += s[pointer];
      pointer++;
    }
  }

  cout << ans << endl;

  return 0;
}


