
#include<iostream>

using namespace std;

int main(){
    int t, n, in;
    cin >> t;
    while (t--){
        cin >> n >> in;
        int mx = in, diff = 0;
        for (int i = 1; i < n; i++){
            cin >> in;
            if (in > mx)
                mx = in;
            else 
                diff = max(diff, mx-in);
        }
        int ans = 0;
        while (diff){
            ans++;
            diff /= 2;
        }
        cout << ans << "\n";
    }
    return 0;
}



