#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  int puzzles[m];

  for (auto &p: puzzles) {
    cin >> p;
  }

  sort(puzzles, puzzles+m);

  int ans = 1000;
  for (int i = 0; i <= m - n; i++){
    ans = min(ans, abs(puzzles[i + n - 1] - puzzles[i]));
  }

  cout << ans << endl;

  return 0;
}


