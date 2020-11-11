
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n], b[n];
        bool canminus = 0, canplus = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool yeswecan = true;
        for (int i = 0; i < n ; i++){
            if (a[i] > b[i] && canminus == false){
                yeswecan = false;
                break;
            }
            else if (a[i] < b[i] && canplus == false){
                yeswecan = false;
                break;
            }
            if (a[i] == -1)
                canminus = true;
            if (a[i] == 1)
                canplus = true;
        }
        cout << (yeswecan ? "YES": "NO") << "\n";
    }
    return 0;
}


