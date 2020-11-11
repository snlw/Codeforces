
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, m, type, l, r;
    cin >> n;
    vector<long long> v(n+1);
    for (int i = 1 ; i <= n; i++)
        cin >> v[i];
    cin >> m ;
    vector<long long> u(v);
    sort(u.begin(), u.end());

    for (int i = 1; i <= n; i++){
        v[i] += v[i-1];
        u[i] += u[i-1];
    }
    long long ans;
    while(m--){
        cin >> type >> l >> r;
        if (type == 1)
            ans = v[r] - v[l-1];
        else
            ans = u[r] - u[l-1];
        cout << ans << "\n";
    }

    return 0;
}

