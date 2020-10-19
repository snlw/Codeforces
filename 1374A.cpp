

#include<iostream>


using namespace std;


int main(){
    int t; 
    cin >> t ;
    for (int i = 0 ; i < t ; i++){
        int x, y , n;
        cin >> x >> y >> n;
        int m = (n-y) %x;
        cout << n-m << endl;
    }
    return 0;
}

