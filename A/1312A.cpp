

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        bool yesno = false;
        if (n % m == 0){
            yesno = true;
        }
        cout << (yesno ? "YES":"NO") << endl;
    }

    return 0;
}

