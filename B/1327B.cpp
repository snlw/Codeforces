
#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> prince(n+1);
    int ans1 = 0, ans2 = 0;
    bool match;
    for (int i = 1; i <= n; i++){
        int num;
        cin >> num;
        vector<int> list(num);
        for (int j = 0; j < num; j++)
            cin >> list[j];
        match = false;
        for (int j = 0; j < num; j++){
            if (prince[list[j]] == 0 && !match){
                prince[list[j]] = 1;
                match = true;
            }
        }
        if (!match)
            ans1 = i;
    }
    
    if (ans1 == 0)
        cout << "OPTIMAL" << "\n";
    else{
        for (int j = 1; j <= n; j++){
                if (prince[j] == 0){
                    ans2 = j;
                    break;
                }
            }
        cout << "IMPROVE" << "\n";
        cout << ans1 << ' ' << ans2 << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}


