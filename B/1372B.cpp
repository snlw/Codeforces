
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n ; 
        int k = n;
        
        for(int p = 2; p <= sqrt(n); p++){
            if(n % p == 0){
                k = p; 
                break;
            }
        }
        cout << n / k << " " << n - n/k << endl;
    }

    return 0;
}
