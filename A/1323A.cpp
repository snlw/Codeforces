
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        bool no = true;
        for (int i = 0 ; i < n ; i++)
            cin >> a[i];
        if (n==1 && a[0]%2 ==1)
            cout << -1 << endl;
        else{
            if (a[0] % 2 == 0)
                cout << 1 << endl << 1 << endl;
            else if (a[1] % 2 == 0)
                cout << 1 << endl << 2 << endl;
            else
                cout << 2 << endl << 1 << " " << 2 << endl;
        }
    }  
    return 0;
}

