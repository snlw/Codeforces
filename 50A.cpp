

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
  int m, n; 
  cin >> m; 
  cin >> n;

  int max = std::max(m,n);
  int min = std::min(m,n);

  int num;
  if (min %2 ==0){
    num = max*(min/2);
  }
  else{
    num = max*(min/2) + max/2; 
  }
  cout << num << endl;
  return 0; 
}

