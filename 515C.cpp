#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    string ans = "";
   
    for (int i = 0; i < n; i++){
        if (s[i] == '2'|| s[i] =='3'|| s[i]=='5' || s[i] =='7')
            ans += s[i];
        if (s[i] == '4')
            ans += "322";
        if (s[i] == '6')
            ans += "53";
        if (s[i] == '8')
            ans += "7222";
        if (s[i] == '9')
            ans += "7332";
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());

    cout << ans << "\n";

    return 0;
}
