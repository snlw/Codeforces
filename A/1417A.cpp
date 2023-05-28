
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0 ; i < n ; i++)
            cin >> a[i];
        int mn = *min_element(a, a+n);
        int total = 0;
        sort(a, a+n);
        for (int i = 0; i < n; i++){
            int diff = k - a[i];
            if (i)
                total += diff/a[0];
        }
        cout << total << endl;
    }

    return 0;
}


