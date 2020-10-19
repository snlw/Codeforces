
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n, k; 
        cin >> n >> k;
        bool can = false;
        if (k*k <= n && n%2==k%2){
            can = true;
        }
        cout << (can ? "YES":"NO") << endl;
    }
    return 0;
}

