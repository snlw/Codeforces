

#include<iostream>


using namespace std;


int main(){
    int t, n, m;
    cin >> t;
    for (int i = 0 ; i < t ; i++){
        cin >> n >> m;
        int a[n] , b[m];
        for (int j = 0 ; j < n; j++){
            cin >> a[j];
        }
        for (int j = 0 ; j < m; j++){
            cin >> b[j];
        }
        int num= 0;
        for (int j = 0 ; j < n ; j++){
            for (int k = 0; k < m; k++){
                if (a[j] == b[k]){
                    num = a[j];
                }
            }
        }
        if (num == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << 1 << " " << num << endl;
        }
    }
    return 0;
}

