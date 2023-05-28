
#include<iostream>

using namespace std;

void solve(){
    int n, in;
    cin >> n;
    int zeros = 0, ones = 0;
    for (int i = 0 ; i < n; i++){
        cin >> in;
        if (in)
            ones++;
        else 
            zeros++;
    }
    if (ones <= n/2){
        cout << zeros << "\n";
        while(zeros--)
            cout << 0 << ' ';
    }
    else{
        ones -= ones%2;
        cout << ones << "\n";
        while(ones--)
            cout << 1 << ' ';
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}


