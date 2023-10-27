#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

bool canDo(){
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b && b == c) {
    return true;
  }

  int newA = 2*b - c;
  if (newA >= a && newA % a == 0 && newA !=0){
    return true;
  }

  int newB = (a + c)/2;
  if (newB >= b && (c - a) % 2 == 0 && newB % b == 0 && newB != 0){
    return true;
  }

  int newC = a + 2*(b - a);
  if (newC >= c && newC % c == 0 && newC != 0){
    return true;
  }

  return false;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--){
    cout << (canDo() ? "YES" : "NO") << endl;
  }

  return 0;
}


