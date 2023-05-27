
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long x = n;
    for (int i = 1; i < n; i++){
        x += i*(n-i);
    }
    cout << x;

    return 0;
}


