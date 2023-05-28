
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, x, y, t;

vector<int> v;

bool check (int d){
    v.clear();
    for (int i = x; i <= y; i += d)
        v.push_back(i);
    if (v.size() > n)
        return false;
    for (int i = x - d; i > 0 && v.size() < n; i -= d)
        v.push_back(i);
    for (int i = y + d; v.size() < n ; i += d)
        v.push_back(i);
    if (v.size() == n)
        return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> x >> y;
        int diff = y - x;
        for (int d = 1; d <= diff; d++){
            if (diff % d == 0){
                if (check(d))
                    break;
            }
        }
        sort(v.begin(), v.end());
        for (int it: v)
            cout << it << ' ';
        cout << "\n";
    }

    return 0;
}


