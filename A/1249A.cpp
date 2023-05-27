



#include<iostream>


using namespace std;


int main(){
    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0 ; i < n ;i++){
            cin >> arr[i];
        }
        bool thereis = false;
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (abs(arr[i]-arr[j]) <= 1){
                    thereis = true;
                    break;
                }
            }
        }
        cout << (thereis? 2:1) << endl;
    }
    return 0;
}


