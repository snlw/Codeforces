

#include<iostream>


using namespace std;


int main(){
    int t, n; 
    cin >> t; 
    string s;
    while (t--){
        cin >> n >> s;
        string h(n, s[n-1]);
        cout << h << endl;
    }


    return 0;
}

