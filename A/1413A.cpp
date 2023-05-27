
#include<iostream>

using namespace std;

void solve(){
    int n, in_1, in_2;
    cin >> n;
    for (int i = 0; i < n/2; i++){
        cin >> in_1 >> in_2;
        cout << -in_2 << ' ' << in_1 << "\n";
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


