

#include<iostream>


using namespace std;


int main(){
  string s; 
  cin >> s; 
  if (s.length() != 1){
    for (int i=0; i < s.length() ; i +=2){
      for (int j=0; j < i; j +=2){
        while(s[i] < s[j]){
          swap(s[i], s[j]);
        }
      }
    }
  }
  cout << s << endl;
  return 0; 
}

