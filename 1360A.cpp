

#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int t; 
    cin >> t;
    for (int i = 0 ; i < t ; i++ ){
        int a,b; 
        cin >> a >> b;
        int mx = max(a,b);
        int mn = min(a,b);
        int s = max(mx,2*mn);
        cout << pow(s,2) << endl;
    }

    return 0;
}

