
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long s, a, b, c;
        cin >> s >> a >> b >> c;
        long long buy = s/c;
        long long free = (s/c)/a*b;
        cout << buy+free << endl;
    }

    return 0;
}

