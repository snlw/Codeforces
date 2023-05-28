
#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector< pair<int,int> > v(n);
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end());
        string ans = "";
        bool reach = true;
        for (int i = 0; i < n; i++){
            // Check if position is reachable
            if (v[i].first < x || v[i].second < y){
                reach = false;
                break;
            }
            ans += string(v[i].first - x, 'R');
            ans += string(v[i].second - y, 'U');
            x = v[i].first;
            y = v[i].second;
        }
        if(reach)
            cout << "YES\n" << ans << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}



