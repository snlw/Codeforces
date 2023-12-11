#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int a[5] = { 600, 60, 0, 10, 1 };
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412 };

void solve() {
  string s;
  int x;
  cin >> s >> x;

  int totalMins = 0;

  for (int i = 0; i < 5; i++) {
    totalMins += (int)(s[i] - '0') * a[i];
  }

  set<int> times;

  for (int i = 0; i < 2022; i++) {
    times.insert(totalMins);

    totalMins += x;
    totalMins %= 1440;
  }

  int count = 0;
  for (int i : times) {
    for (int j = 0; j < 16; j++) {
      if (good[j] == i) {
        count++;
      }
    }
  }
  cout << count << endl;

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


