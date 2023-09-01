#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  string str[N];
  for (int i = 0; i < N; i++){
    cin >> str[i];
  }

  int ans = 99999;

  for (int i = 0; i < N; i++){
    int mn = 0;
    for (int j = 0; j < N; j++) {
      if (str[i] == str[j]){
        continue;
      }
      string doubleStr = str[j] + str[j];
      int moves = doubleStr.find(str[i]);
      if (moves == string::npos){
        mn = -1;
      }
      else {
        mn += moves;
      }
    }
    ans = min(ans, mn);
  }

  cout << ans << endl;

  return 0;
}


