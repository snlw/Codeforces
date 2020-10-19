
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, in;
        cin >> n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++){
            cin >> in;
            v[in]++;
        }
        int mx = *max_element(v.begin(), v.end());
        int diff = n + 1 - count(v.begin(), v.end(), 0);
        cout << max(min(mx -1, diff), min(mx, diff -1)) << endl;
    }
    return 0;
}
