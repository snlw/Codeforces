
#include<iostream>

using namespace std;

void find(string s){
    int v[3] = {-1, -1, -1};
    int ans = 2000001;
    for (int i = 0; i < s.length(); i++){
        v[s[i]-'0'-1] = i;
        if (v[0] != -1 && v[1] != -1 && v[2] != -1){
            int x = max(v[0], max(v[2],v[1])) - min(v[0], min(v[2],v[1])) + 1;
            ans = min(x, ans);
        }
    }
    if (ans == 2000001)
        ans = 0;
    cout << ans << endl;
};

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        find(s);
    }

    return 0;
}



