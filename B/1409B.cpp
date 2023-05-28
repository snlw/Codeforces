
#include<iostream>

using namespace std;

long long MinProduct(long long a, long long b, long long x, long long y, long long n){
    // decrease a first
    long long afirst, bfirst;
    if (n <= a - x)
        afirst = (a-n)*b;
    else{
        afirst = (x)*(b-(n-(a-x)));
    }
    if (n <= b - y){
        bfirst = (b-n)*a;
    }
    else{
        bfirst = (y)*(a-(n-(b-y)));
    }
    return min(afirst, bfirst);
};

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b, x, y, n, ans;
        cin >> a >> b >> x >> y >> n;
        if (n >= a - x + b - y)
            ans = x*y;
        else{
            ans = MinProduct(a,b,x,y,n);
        }
        cout << ans << endl;
    }

    return 0;
}


