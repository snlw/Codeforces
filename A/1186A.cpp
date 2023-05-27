

#include<iostream>


using namespace std;


int main(){
    int n , m , k ;
    cin >> n >> m >> k;
    bool canreward = true;

    if ( n > m || n > k ){
        canreward = false;
    }
    if (canreward){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
   

    return 0;
}

