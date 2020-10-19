

#include<iostream>


using namespace std;


int main(){
    int n; 
    cin >> n; 

    int grps = 1 ; 
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for (int j = 1; j < n; j++){
        if ((arr[j] + arr[j-1])%2 !=0){
            grps++;
        }
    }
    cout << grps << endl;
    return 0;
}

