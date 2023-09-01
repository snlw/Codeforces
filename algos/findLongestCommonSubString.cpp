#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

string findLongestCommonSubstring (string str1,string str2) {
  int L = str1.length();
  int dp[L + 1][L + 1];

  int len = 0;

  int row, col;

  for (int i = 0; i <= L; i++){
    for (int j = 0; j <= L; j++){
      if (i == 0 || j == 0){
        dp[i][j] = 0;
      }
      else if (str1[i - 1] == str2[j - 1]){
        dp[i][j] = dp[i - 1][j - 1] + 1;
        if (len < dp[i][j]) {
          len = dp[i][j];
          row = i;
          col = j;
        }
      }
      else {
        dp[i][j] = 0;
      }
    }
  }
  string longestSubString = "";

  while ( dp[row][col] != 0) {
    longestSubString = str1[row - 1] + longestSubString;
    row--;
    col--;
  }
  return longestSubString;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str1, str2 = "";
  cin >> str1 >> str2;

  string common = findLongestCommonSubstring(str1, str2);

  cout << "Longest Common Sub String: " <<  common << endl;
  return 0;
}


