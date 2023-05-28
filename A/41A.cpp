

#include<iostream>


using namespace std;


int main(){
    string ber, bir; 
    cin >> ber >> bir;

    for (int i = 0 ; i < ber.length() ; i++){
        if( ber[i]!= bir[ber.length()-1-i] ){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

