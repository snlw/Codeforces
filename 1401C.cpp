
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> sorted_a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sorted_a[i] = a[i];
    }
    int mn = *min_element(a.begin(), a.end());
    sort(sorted_a.begin(), sorted_a.end());

    bool nondec = true;
    for (int i = 0; i < n; i++){
        if (a[i] != sorted_a[i] && a[i] % mn != 0){
            nondec = false;
            break;
        }
    }
    cout << (nondec ? "YES":"NO") << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}


