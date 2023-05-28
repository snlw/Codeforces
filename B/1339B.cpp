
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int i = 0, j = n -1;
        while (i <= j){
            if (i == j){
                ans.push_back(v[i]);
                break;      
            }
            ans.push_back(v[i]);
            ans.push_back(v[j]);
            i++;
            j--;
        }
        reverse(ans.begin(), ans.end());
        for (int it: ans)
            cout << it << " ";
        cout << "\n";
    }

    return 0;
}

