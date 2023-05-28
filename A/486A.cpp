

#include<iostream>


using namespace std;


int main(){
    long long int n, num; 
    cin >> n ; 
    if (n%2 == 0){
        num = n/2;
    }
    else{
        num = (n-1)/2-n;
    }
    cout << num << endl;
    return 0;
}
