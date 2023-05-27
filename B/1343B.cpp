

#include<iostream>


using namespace std;


int main(){
    int t, n; 
    cin >> t; 

    for (int i = 0 ; i < t ; i++){
        cin >> n; 
        if ( n % 4 != 0 ){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for (int i = 2; i<=n ; i+=2){
                cout << i << " ";
            }
            for (int i = 1; i <= n-1; i+=2){
                if (i == n-1){
                    i += n/2;
                    cout << i << endl;
                    break;
                }
                cout << i << " ";

            }
        }
    }

    return 0;
}

