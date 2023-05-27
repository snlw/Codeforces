
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        for (int row = 0; row < n; row++){
            for (int col = 0; col < m; col++){
                if (row == 0 && col == 0){
                    cout << 'W';
                }
                else
                    cout << 'B';
            }
            cout << endl;
        }
    }

    return 0;
}


