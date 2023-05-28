

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin >> n; 
    if (n == 1){
        cout << 0 << endl;
        return 0;
    }
    else {
        int arr[n];
        for (int i = 0; i < n ; i++){
            cin >> arr[i];
        }
        int max = *max_element(arr, arr+n);
        int x = 0; 
        for (int j = 0; j < n ; j++){
            x += max - arr[j];
        }
        cout << x << endl;
    }
    return 0;
}

