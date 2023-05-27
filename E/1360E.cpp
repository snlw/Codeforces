
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        char a[50][50];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        // Check n-1 x n-1
        bool didhappen = true;
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-1; j++){
                if (a[i][j] == '1'){
                    if (a[i][j+1] == '0' && a[i+1][j] == '0')
                        didhappen = false;
                }
            }
        }
        cout << (didhappen ? "YES":"NO") << endl;
    }
    return 0;
}



