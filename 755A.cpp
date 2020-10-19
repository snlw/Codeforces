
#include<iostream>

using namespace std;

bool isprime(int a){
    if ( a == 1 )
        return true;
    for (int i = 2; i <= 1000;i++){
        if (a%i == 0 && a != i)
            return false;
    }
    return true;
};

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= 100; i++){
        if (isprime(n*i+1) == false){
            cout << i;
            return 0;
        }
    }
}
