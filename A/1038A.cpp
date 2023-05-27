
#include<iostream>

using namespace std;
int n, k;
string s;
int f[26];
int main(){
    cin >> n >> k >> s;
    for (auto &it:s)
        f[it-'A']++;
    int ans = f[0];
    for (int i = 0; i < k; i++)
        ans = min(ans, f[i]);
    ans*= k;
    cout << ans;
    return 0;
}

