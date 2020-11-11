
#include<iostream>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int p = n;
     //           9
     //         7---8
     //       5-------6
     //     3-----------4
     //   1---------------2
        while (p > 1 && a[p] <= a[p-1])
            p--;
        while (p > 1 && a[p] >= a[p-1])
            p--;
        cout << p - 1 << "\n";
    }

    return 0;
}


