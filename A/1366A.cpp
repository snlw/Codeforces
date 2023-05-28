
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int emeralds = min(a, min(b, (a+b)/3));
     
        cout << emeralds << endl;
    }


    return 0;
}


