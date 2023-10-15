#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  char top[11] = { 'q', 'w' , 'e', 'r', 't', 'y', 'u', 'i','o','p', '['};
  char mid[10] = {'a', 's', 'd','f','g','h','j','k','l',';'};
  char bot[10] = {'z', 'x','c','v','b','n','m',',', '.', '/'}; 

  char pos;
  string s;
  cin >> pos >> s;

  string ans = "";

  int idx = pos == 'L' ? 1 : -1;

  for (int i = 0; i < s.size(); i++) {
    bool found = false;

    // Check Top Row
    for (int j = 0;  j < 11; j++) {
      if (s[i] == top[j]){
        ans += top[j + idx];
        found = true;
        break;
      }
    }

    // Check Mid Row
    if (!found) {
      for (int j = 0; j < 10; j++) {
        if(s[i] == mid[j]) {
          ans += mid[j + idx];
          found = true;
          break;
        }
      }
    }
    // Check Bottom Row
    if (!found) {
      for (int j = 0; j < 10; j++) {
        if(s[i] == bot[j]) {
          ans += bot[j + idx];
          found = true;
          break;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}


