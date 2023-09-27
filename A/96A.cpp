#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string l;
  cin >> l;

  char counter = l[0];

  int count = 1;

  for (int i = 1; i < l.size(); i++){
    if (counter == l[i]){
      count++;
    }
    else {
      count = 1;
      counter = l[i];
    }

    if (count >= 7){
      break;
    }
  }

  cout << (count >= 7 ? "YES" : "NO") << endl;

  return 0;
}


