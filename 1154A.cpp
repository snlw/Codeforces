#include<iostream>
#include<algorithm>


using namespace std; 

int main(){
    int arr[4]; 
    int a, b, c;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    
    sort(arr, arr+4, greater<int>());
    
    a  = arr[0] - arr[1] ;
    b = arr[2] - a;
    c = arr[3] -a;
    cout << a << " " << b << " " << c  << endl;
    return 0;
}
