
#include<iostream>
#include<algorithm>

using namespace std;
// Function to remove duplicate elements 
// This function returns new size of modified 
// array. 

int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    // To store index of next unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 

int main(){
    int n, x ,y; 
    cin >> n >> x;
    int arr[x];
    for (int i= 0; i<x ; i++){
        cin >> arr[i];
    }

    cin >> y;
    for (int j=x; j<x+y;j++){
        cin >> arr[j];
    }
    sort(arr, arr+x+y);
    
    auto u = removeDuplicates(arr, x+y);
    if (u == n){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}



