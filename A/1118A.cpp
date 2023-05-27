
#include<iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while (q--){
        long long n, a, b, money;
        cin >> n >> a >> b;
        if (2*a < b){
            money = n*a;
        }
        else
            money = (n/2)*b + (n%2)*a;
        cout << money << endl;
    }

    return 0;
}

