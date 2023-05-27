

#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int t ;
    cin >> t ; 
    for ( int i = 0 ; i < t ; i++  ){
        int n ;
        cin >> n ;
        int a = pow(2,n);
        int b = 0 ;
        for (int j = 1; j < n/2 ; j++){
            a +=pow(2,j);
        }
        for (int k = n/2; k < n ; k++){
            b += pow(2,k);
        }
        cout << abs(a-b) << endl;
    }

    return 0;
}

