

#include<iostream>


using namespace std;


int main(){
  int k , n , w ; 
  cin >> k >> n >> w; 

  int total = 0; 
  for (int i = 1; i <= w ; i++){
    total+= i;
  }
  
  int loan = total*k - n;
  if (loan <= 0){
    loan = 0;
  }
  cout << loan << endl;
  return 0; 
}

