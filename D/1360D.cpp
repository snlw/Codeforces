
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    long long n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        long long ans = n;
        if (k >= n)
            ans = 1;
        else{
            for (long long i = 1; i*i <= n; i++){
                if (n % i == 0){
                    if ( i <= k )
                        ans = min(ans, n/i);
                    if ( n/i <= k )
                        ans = min(ans, i);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}



