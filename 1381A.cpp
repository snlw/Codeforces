// mynamemosta
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string a, b ;
        cin >> n >> a >> b;
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (a[i] != b[i])
                ans++;
        }
        cout << 3*ans << ' ';
        for (int i = 0; i < n; i++){
            if (a[i] != b[i])
                cout << i + 1 << " 1 " << i+1 << ' ';
        }
        cout << "\n";
    }

    return 0;
}


