#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int score[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
  };

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int ans = 0;
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 10; k++) {
        char c;
        cin >> c;
        if (c == 'X') {
          ans += score[j][k];
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}


