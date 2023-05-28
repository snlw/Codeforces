

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t; 
    while (t--){
        int n, m;
        cin >> n >> m;
        bool thereispuzzle = false;
        if (n == 1 || m == 1){
            thereispuzzle = true;
        }
        if (n == 2 && m == 2){
            thereispuzzle = true;
        }
        cout << (thereispuzzle? "YES":"NO") << endl;
    }

    return 0;
}

