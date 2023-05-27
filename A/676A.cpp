
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    int idx_mx, idx_mn;
    for (int i = 0; i < n; i++){
        if (a[i] == mx)
            idx_mx = i;
        if (a[i] == mn)
            idx_mn = i;
    }
    int ans = abs(idx_mx-idx_mn);
    if (idx_mx == 0 || idx_mx == n-1 || idx_mn == 0 || idx_mn == n-1)
        ans = n-1;
    else
        ans = max(n-1-idx_mx, max(n-1-idx_mn,max(idx_mn,idx_mx)));
    
    cout << ans << endl;
    return 0;
}


