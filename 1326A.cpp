
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n ;
        if (n == 1)
            cout << -1;
        else{
            cout << 2;
            for (int i = 0; i < n-1; i++)
                cout << 9;
        }
        cout << "\n";
    }
    return 0;
}


