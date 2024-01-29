#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

void solve() {
  string n;
  cin >> n; 
 
  int len = n.length();
  
  for (int i = 0; i < len; i++) {
    if (n[i] == '0' || n[i] == '8') {
        cout << YES << endl;
        cout << n[i] << endl;
        return;
    }
}

  if (len < 3) {
    cout << NO << endl;
    return;
  }


  for(int i = 0; i < len - 2; i++) {
    for (int j = i + 1; j < len - 1; j++) {
      for (int k = j + 1; k < len; k++) {
        int number = 100*(n[i] - '0') + 10*(n[j] - '0') + (n[k] - '0');
        if (number % 8 == 0) {
          cout << YES << endl;
          cout << number << endl;
          return;
        }
      }
    }
  }
  
  for(int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
        int number = 10*(n[i] - '0') + (n[j] - '0');
        if (number % 8 == 0) {
          cout << YES << endl;
          cout << number << endl;
          return;
        }
    }
  }

  cout << NO << endl;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}



