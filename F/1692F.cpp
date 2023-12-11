#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int arr[10] = {};
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[x % 10]++;
  }

  vector<int> v;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < min(arr[i], 3); j++) {
      v.push_back(i);
    }
  }

  bool exist = false;

  int m = v.size();

  for (int i = 0; i < m; i++) {
    for(int j = i + 1; j < m; j++) {
      for (int k = j + 1; k < m; k++) {
        int sum = v[i] + v[j] + v[k];
        if (sum % 10 == 3) {
          exist = true;
          break;
        }
      }
    }
  }

  cout << (exist ? "YES" : "NO") << endl;
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


