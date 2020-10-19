

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t; 
    for ( int i = 0 ; i < t ; i++ ){
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0 ; j < n ; j++){
            cin >> arr[j];
        }
        int odd = 0 , even = 0; 
        for (int j = 0 ; j < n ; j++){
            if (arr[j] % 2 != j % 2){
                if (arr[j] % 2 ==1){
                    odd++;
                }
                else{
                    even++;
                }
            }
        }
        if (odd!=even){
            cout << -1 << endl;
        }
        else {
            cout << even << endl;
        }

    }

    return 0;
}

