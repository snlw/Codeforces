
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        int lowerprice = 1e5;
        for (int i = n - 1; i >= 0; i--){
            if (a[i] > lowerprice)
                ans++;
            lowerprice = min(lowerprice, a[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}

