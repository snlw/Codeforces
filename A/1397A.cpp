

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int> cnt(26);
        for (int i = 0 ; i < n; i++){
            string s;
            cin >> s;
            for (char c :s){
                ++cnt[c-'a'];
            }
        }
        bool ans = true;
        for (int i = 0 ; i < 26; i++){
            if (cnt[i] % n != 0){
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}

