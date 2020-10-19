

#include<iostream>


using namespace std;


int main(){
    int t; 
    cin >> t ;
    for ( int i = 0 ; i < t ; i++ ){
        int n; 
        cin >> n; 
        int num;
        if (n % 2 == 1){
            num = (n+1)/2;
        }
        else{
            num = n/2;
        }
        cout << num << endl;
    }

    return 0;
}

