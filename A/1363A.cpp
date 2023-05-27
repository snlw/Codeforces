
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x, in;
        cin >> n >> x;
        int odd = 0;
        for (int i = 0; i < n; i++){
            cin >> in;
            if (in % 2 == 1)
                odd++;
        }
        int even = n - odd;
        int m = min(even, x-1);
        int d = x - m;
        if (d%2 == 0)
            d++;
        if(odd >= d && d<= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
                
    }

    return 0;
}


