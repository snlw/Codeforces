
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for (int i = 1; i <= n; i += 2){
            if (a[i] < 0)
                a[i] *= -1;
        }
        for (int i = 2; i <= n; i += 2){
            if (a[i] > 0)
                a[i] *= -1;
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << ' ';
        cout << "\n";
    }

    return 0;
}







