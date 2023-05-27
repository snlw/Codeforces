

#include<iostream>


using namespace std;


int main(){
    int n; 
    cin >> n ; 
    int notes[5] = {100, 20, 10, 5, 1};
    int bills = 0 ;
    for (int i = 0 ; i < 5 ; i++ ){
        bills += n / notes[i]; 
        n  = n % notes[i];
    }
    cout << bills << endl;

    return 0;
}

