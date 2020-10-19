
#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int max = *max_element(arr, arr+n);
    int min = *min_element(arr, arr+n);
    
    int imax, imin; 
    for (int i = 0 ; i < n ; i++){
        if (arr[i] == max){
            imax = i; 
            break;
        }
    }
    for (int i = n-1 ; i >=0; i--){
        if (arr[i] == min){
            imin = i;
            break;
        }
    }
    int x; 
    if (imax > imin){
        x = imax + n - 1 - imin -1 ;
    }
    else{
        x = imax + n - 1 - imin;
    }
    
    cout << x << endl;
  
    return 0;
}


