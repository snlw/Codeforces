
#include<iostream>

using namespace std;

int main(){
    string s;
    int m, count = 0;
    cin >> s >> m;
    int dp[100005];
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i-1]){
            count++;
        }
        dp[i] = count;
    }
    while (m--){
        int l,r;
        scanf("%d %d", &l, &r);
        cout << dp[r-1]-dp[l-1] << endl;
        }

    return 0;
}
