

#include<iostream>


using namespace std;


int main(){
  int n,k; 
  cin >> n;
  cin >> k;
  int count=0;
  int kth = 0; 
  for (int i =0; i<n; i++){
    int score; 
    cin >> score;
    if (score>0){
      if (score >= kth){
        count++;
      }
      if (i==k-1){
        kth = score;
      }
    }
  }
  cout << count << endl;
  return 0; 
}

