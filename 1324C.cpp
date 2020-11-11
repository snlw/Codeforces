
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        int target = s.length() + 1;
        int ans = 0;
        vector<int> R;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'R')
                R.push_back(i+1);
        }
        if (R.empty())
            ans = target;
        else{
            int firstjump = R.front();
            int lastjump = target - R.back();
            for (int i = 0; i < R.size()-1; i++)
                ans = max(ans, R[i+1]-R[i]);
            ans = max(ans, max(firstjump, lastjump));
        }
        cout << ans << "\n";
    }

    return 0;
}

