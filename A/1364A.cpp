
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x, in;
        int sum = 0, l = -1, r;
        cin >> n >> x;
        for (int i = 0; i < n; i++){
            cin >> in;
            if (in % x){
                if (l == -1)
                    l = i;
                r = i;
            }
            sum += in;
        }
        if (sum % x)
            cout << n << "\n";
        else if (l == -1)
            cout << -1 << "\n";
        else
            cout << n-min(l+1, n-r) << "\n";
       
    }
    return 0;
}



