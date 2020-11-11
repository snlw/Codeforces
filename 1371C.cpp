
#include<iostream>

using namespace std;

void solve(){
    long long a, b, n, m;
    cin >> a >> b >> n >> m;
    bool notangry = false;
    if (a+b >= m+n && m <= min(a,b))
        notangry = true;
    cout << (notangry? "YES":"NO") << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}


