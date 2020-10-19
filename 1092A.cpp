
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        string combo;
        cin >> n >> k;
        for (int i = 0; i < k; i++)
            combo.push_back(char(97+i));
        for (int i = 0; i < n/k; i++)
            cout << combo;
        if (n % k != 0){
            for (int i = 0; i < n%k; i++)
                cout << combo[i];
        }
        cout << endl;
    }

    return 0;
}

