

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int problems=0;
    for (int i = 0; i < n; i+=2){
        problems += arr[i+1]-arr[i];
    }
    cout << problems << endl;

    return 0;
}

