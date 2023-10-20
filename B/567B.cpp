#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  map<int, bool> room;

  int ans = 0, current = 0;

  for (int i = 0; i < n; i++) {
    int reader;
    char log;
    cin >> log >> reader; 

    if (log == '+') {
      room[reader] = true;
      current++;
    }
    else {
      if (room[reader] == true){
        current--;
      }
      else {
        ans++;
      }
      room[reader] = false;
    } 
    ans = max(ans, current);
  }

  cout << ans << endl;

  return 0;
}


