
#include<iostream>

using namespace std;

void solve(){
    string s;
    cin >> s;
    int ones = 0, zeros = 0;
    for (int i = 0 ; i < s.length(); i++){
        if (s[i] == '1')
            ones++;
        else
            zeros++;
    }
    int done_zeros = 0, done_ones = 0, ans = min(ones,zeros);
    for (int i = 0 ; i < s.length(); i++){
        if (s[i] == '1')
            done_ones++;
        else
            done_zeros++;
        ans = min(ans, min(done_ones+zeros-done_zeros, done_zeros+ones-done_ones));
    }
    cout << ans << "\n";
}


int main(){
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}



