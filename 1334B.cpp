
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0 ; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int ans = 0;
        long long sum = 0;
        for (int i = n-1; i >= 0; i--){
            sum += a[i];
            float wealth = (float)sum/(float)(n-i);
            if (wealth >= x)
                ans++;
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}



