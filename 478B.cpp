
#include<iostream>

using namespace std;

long long pairs(long long n){
    return n*(n-1)/2;
}

int main(){
    long long n, m;
    cin >> n >> m;
    long long a = n/m;
    long long b = n%m;
    long long mi = pairs(a) * (m-b) + pairs(a+1)*b;
    long long ma = pairs(n - m + 1);
    cout << mi << " " << ma << endl;

    return 0;
}


