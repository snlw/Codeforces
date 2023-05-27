
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        bool can = false;
        if (s%n <= b && s - a*n <= b)
            can = true;
        cout << ( can ? "YES":"NO" ) << "\n";
    }

    return 0;
}


