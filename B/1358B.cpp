
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        bool mariahasfriends = false;
        int ans;
        for (int i = n-1; i >=0; i--){
            if (a[i] <= i+1){
                mariahasfriends = true;
                ans = i + 2;
                break;
            }
        }
        cout << (mariahasfriends? ans:1) << endl;
    }

    return 0;
}


