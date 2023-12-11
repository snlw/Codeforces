#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;
  
  map<int, int>a;

  int distinct = 0;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (a[num]) {
      continue;
    }
    else {
      a[num] = 1;
      distinct++;
    }
  }

  if ((distinct % 2 == 0 && n % 2 == 0) || (distinct % 2 == 1 && n % 2 == 1)){
    cout << distinct << endl;
  }
  else {
    cout << distinct - 1 << endl;
  }
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


