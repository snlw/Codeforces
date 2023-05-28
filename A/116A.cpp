

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
  int n; 
  cin >> n; 
  int maximum = 0; 
  int capacity = 0; 
  for (int i =0; i < n ; i++){
    int a, b;
    cin >> a >> b; 
    capacity -= a;
    capacity += b;
    maximum = max(maximum, capacity);
  }

  cout << maximum << endl;
  return 0; 
}

