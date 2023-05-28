

#include<iostream>


using namespace std;


int main(){
    long long q, a, b, c ;
    cin >> q ;
    while (q--){
        cin >> a >> b >> c;
        long long candies = (a+b+c)/2;
        cout << candies << endl;

    }

    return 0;
}

