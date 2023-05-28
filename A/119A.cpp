

#include<iostream>


using namespace std;

int gcd(int a, int b){
   int c;
   if (a > b){
       swap(a,b);
   }
   if (a == 0){
       return b;
   }
   else{
       while(1){
           c = a;
           a = b%a;
           b = c;
           if (a==0){
               return b;
               break;
           }
       }
   }
}
int main(){
    int a, b , n;
    cin >> a >> b >> n;
    while(1){
        n -= gcd(a,n);
        if (n==0 && gcd(a,n) == a){
            cout << 0 ;
            break;
        }
        n -= gcd(b,n);
        if (n==0 && gcd(b,n) ==b){
            cout << 1;
            break;
        }
    }
    return 0;
}

