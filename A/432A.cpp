

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n , k ; 
    cin >> n >> k ; 
    int arr[n];
    for ( int i = 0 ; i < n ; i ++ ){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int max = 5 - k; 
    int count = 0; 
    for ( int j = 0 ; j < n ; j++ ){
        if (arr[j] <= max){
            count++;
        }
    }
    cout << count/3 << endl;
   

    return 0;
}

