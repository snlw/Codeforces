#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m;
  cin >> n >> m;

  vector<vector<int>> board(n+1, vector<int>(n+1, 0));

  int ans = -1;

  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    for (int a = x; a < x + 3 && a <= n; a++){
      for (int b = y; b < y + 3 && b <= n; b++){
        board[a][b]++;
        if (board[a][b] == 9) {
          ans = i + 1;
          break;
        }
      }
    }

    if (ans != -1){
      break;
    }

  }

  cout << ans << endl;

  return 0;
}


