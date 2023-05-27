

#include<iostream>


using namespace std;


int main(){
    int t ;
    cin >> t ; 
    for (int i = 0 ; i < t ; i++){
        string b; 
        cin >> b;
        string a = "";
        a += b[0];
        for (int j = 2 ; j < b.length() -1 ; j+=2){
            a += b[j];
        }
        a += b.back();
        cout << a << endl;
    }
        return 0;
}

