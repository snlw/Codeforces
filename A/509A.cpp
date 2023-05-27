#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin>> n;
    int arr[n];
    fill_n(arr,n,1);
    for (int i = 0; i < n-1 ; i++){
        int last[n];
        last[0] = 1; 
        for (int j = 1; j < n;j++){
            last[j] = last[j-1]+ arr[j];
            arr[j] = last[j];
        }
    }
    cout << *max_element(arr,arr+n) << endl;

    return 0;
}


