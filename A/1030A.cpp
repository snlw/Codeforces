

#include<iostream>


using namespace std;


int main(){
    int n; 
    cin >> n;
    int total= 0; 
    for (int i = 0 ; i < n ; i++){
        int res; 
        cin >> res;
        total += res; 
    }
    if (total == 0){
        cout << "EASY" << endl; 
    }
    else{
        cout << "HARD" << endl;
    }
    return 0;
}

