
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, r, ans;
        cin >> n >> r;
        if (n == 1)
            ans = 1;
        else if (n <= r)
            ans = 1 + ((1+n-1)*(n-1-1+1))/2;
        else 
            ans = 0 + ((1+r)*(r-1+1))/2;
        cout << ans << "\n";


    }

    return 0;
}


