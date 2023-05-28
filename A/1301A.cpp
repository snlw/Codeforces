
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string a, b, c;
        cin >> a >> b >> c;
        bool can = true;
        for (int i = 0 ; i < c.length(); i++){
            if (c[i] != b[i] && c[i] != a[i]){
                can = false;
                break;
            }
        }
        cout << (can? "YES":"NO") << endl;
    }

    return 0;
}


