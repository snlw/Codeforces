
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int p1[k1], p2[k2];
        bool p1wins = false;
        for (int i = 0 ; i < k1; i++){
            cin >> p1[i];
        }
        for (int i = 0 ; i < k2; i++)
            cin >> p2[i];
        for (int i = 0; i < k1; i++){
            if (p1[i] == n){
                p1wins = true;
                break;
            }
        }

        cout << (p1wins? "YES":"NO") << endl;
    }

    return 0;
}

