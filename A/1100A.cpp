#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;
  
  vector<int> sites(n);
  int sum = 0;

  for( auto &a : sites ){
    cin >> a;
    sum += a;
  }

  int ans = 0;

  for (int i = 0; i < k; i++){
    int iterationAns = sum;
    for (int j = i; j < n; j+=k){
        iterationAns -= sites[j];
    }
    ans = max(ans, abs(iterationAns));
  }

  cout << ans << endl;
  return 0;
}
