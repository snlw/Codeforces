#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int strength[200000], sortedStrength[200000];
  for (int i = 0; i < n; i++) {
    int str;
    cin >> str;
    strength[i] = str;
    sortedStrength[i] = str;
  }

  sort(sortedStrength, sortedStrength + n);

  for (int i = 0; i < n; i++) {
    if (strength[i] == sortedStrength[n - 1]) {
      cout << (strength[i] - sortedStrength[n - 2]) << " ";
    }
    else {
      cout << (strength[i] - sortedStrength[n - 1]) << " "; 
    }
  }
  cout << "\n";
  return;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  
  while(t--) {
    solve();
  }

  return 0;
}


