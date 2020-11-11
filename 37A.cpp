
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, in;
    cin >> n;
    vector<int> v(1001);
    set<int> s;
    for (int i = 0; i < n; i++){
        cin >> in;
        s.insert(in);
        v[in]++;
    }
    int ans1 = s.size();
    int ans2 = *max_element(v.begin(), v.end());
    cout << ans2 << ' ' << ans1 << "\n";
    return 0;
}


