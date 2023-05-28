

#include<iostream>


using namespace std;


int main(){
    int k;
    cin >> k; 
    int primes =  k / 2; 
    cout << primes << endl;
    if (k % 2 == 1){
        for (int i = 0; i < primes - 1; i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    else{
        for (int i = 0; i < primes; i++){
            cout << 2 << " " ;
        }
    }
    return 0;
}

