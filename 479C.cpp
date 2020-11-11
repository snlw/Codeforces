
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector< pair<int,int> > v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int ans = v[0].second;
    for (int i = 1; i < n ; i++){
        if (ans > v[i].second)
            ans = max(ans, v[i].first);
        else
            ans = max(ans, v[i].second);
    }
    cout << ans << "\n";
    return 0;
}


