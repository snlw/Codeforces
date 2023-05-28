
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int e[n];
        for (int i = 0; i < n; i++)
            cin >> e[i];
        sort(e, e+n);
        int ans =0, cur = 0;
        for (int i = 0 ; i < n; i++){
            if (++cur  == e[i]){
                ans++;
                cur = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}


