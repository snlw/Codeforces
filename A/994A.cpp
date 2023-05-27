
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, m, in;
    cin >> n >> m;
    int x[n];
    vector<int> ans;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < m; i++){
        cin >> in;
        for (int j = 0; j < n; j++){
            if (x[j] == in)
                ans.push_back(j);
        }
    }
    sort(ans.begin(), ans.end());
    for (int it: ans)
        cout << x[it] << ' ';

    return 0;
}


