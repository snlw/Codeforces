

#include<iostream>


using namespace std;


int main(){
    int a, b, gcd = 1;
    cin >> a >> b;
    int c = min(a,b);
    while (c >0){
        gcd *= c;
        c--;
    }
    cout << gcd;

    return 0;
}

