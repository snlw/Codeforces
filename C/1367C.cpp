
#include<iostream>
#include<set>

using namespace std;

int t, n, k;
string s;

void solve(){
    int ans = 0;
    set<int> a;
    for (int i = 0; i < n; i++){
        if (s[i] == '1')
            a.insert(i);
    }
    for (int i = 0 ; i < n; i++){
        if (s[i] == '0'){
            auto it = a.lower_bound(i-k);
            if (it == a.end() || *it > i+k){
                ans++;
                s[i] = '1';
                a.insert(i);
            }
        }
    }
    cout << ans << endl;
};

int main(){
    cin >> t;
    while (t--){
        cin >> n >> k >> s;
        solve();
    }

    return 0;
}


