

#include<iostream>


using namespace std;


int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int arr[n];
        for (int i = 0 ; i < n; i++){
            cin >> arr[i];
        }
        bool yes = false;
        int idx;
        for (int i = 0; i+2 < n; i++){
            if (arr[i] + arr[i+1] <= arr[n-1]){
                idx = i;
                yes = true;
                break;
            }
        }
        if (yes){
            cout << idx+1 << " " << idx+2 << " " << n << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}



