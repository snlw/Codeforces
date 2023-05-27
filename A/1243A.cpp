
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k;
    cin >> k;
    while (k--){
        int n, ans = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for (int i=0; i < n;i++){
            ans = max(ans, min(a[i], n-i));
        }
        cout << ans << endl;
    }

    return 0;
}

