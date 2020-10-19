

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string upcase(string s){
  transform(s.begin(), s.end(), s.begin(), ::toupper);
  return s;
};

int main(){
  string s1 , s2; 
  cin >> s1;
  cin >> s2; 

  if (upcase(s1) == upcase(s2)){
    cout << 0 << endl;
  }
  else if (upcase(s1) < upcase(s2)){
    cout << -1 << endl; 
  }
  else {
    cout << 1 << endl;
  }
  return 0; 
}

