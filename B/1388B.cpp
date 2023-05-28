
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int num_8 = (n+3)/4;
        for (int i = 0; i < n - num_8; i++)
            cout << 9;
        for (int i = 0; i < num_8; i++)
            cout << 8;
        cout << "\n";
    }

    return 0;
}


