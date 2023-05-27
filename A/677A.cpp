

#include<iostream>


using namespace std;


int main(){
     int n, h;
     cin >> n >> h;

     int width = 0; 

     for (int i = 0 ; i < n ; i++){
         int h1;
         cin >> h1;
         if (h1 > h){
             width += 2; 
         }
         else{
             width++;
         }
     }
     cout << width << endl;


    return 0;
}

