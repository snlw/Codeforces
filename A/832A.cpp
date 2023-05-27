
#include<iostream>

using namespace std;

int main(){
    long long n; 
    long long k;
    cin >> n >> k ;
    long long moves = n/k;
    if (moves % 2 == 1)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}

