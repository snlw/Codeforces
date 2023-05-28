
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long ans = (n+a-1)/a*((m+a-1)/a);
    cout << ans;

    return 0;
}

