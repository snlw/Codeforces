

#include<iostream>


using namespace std;


int main(){
    int n;
    cin >> n; 
    int arr[n];
    int giver; 
    for (int i = 0 ; i < n ; i++){
        cin >> giver;
        arr[giver -1] = i+1 ;
    }

    for (int j = 0 ; j < n; j++){
        cout << arr[j] << " " ; 
    }



    return 0;
}

