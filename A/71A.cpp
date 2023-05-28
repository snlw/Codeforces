

#include<iostream>
#include<string>

using namespace std;


int main(){
  int i;
  string s; 
  cin >> i;
  for (int j=0; j<i; j++){
    cin >> s; 
    if (s.length() > 10){
      cout << s.front() <<  s.length()-2  << s.back() << endl;
  }
    else{
      cout << s << endl;
    }
  }
  return 0; 
}

