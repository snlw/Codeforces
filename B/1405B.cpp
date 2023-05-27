
#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long bag = 0;
    for (int i = 0 ; i < n; i++){
        if (v[i] > 0){
            bag += v[i];
        }
        else if (bag != 0)
            bag = max(0LL, bag + v[i]);
    }
    cout << bag << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}



