#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n, a;
  cin >> n >> a;

  if (n == 1) {
    cout << "0" << endl;
    return;
  }

  int checkpoints[n];

  for (int i = 0; i < n; i++) {
    cin >> checkpoints[i];
  }

  sort(checkpoints, checkpoints + n);

  int dist1 = checkpoints[n-1] - checkpoints[1] + min(abs(checkpoints[n-1] - a), abs(checkpoints[1] - a));
  int dist2 = checkpoints[n-2] - checkpoints[0] + min(abs(checkpoints[n-2] - a), abs(checkpoints[0] - a));

  cout << min(dist1, dist2) << endl;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}


