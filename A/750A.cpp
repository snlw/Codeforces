

#include<iostream>


using namespace std;


int main(){
    int n, k ; 
    cin >> n >> k; 

    int count = 0;
    int avail = 240 - k;
    while ((avail - 5*(count+1) >= 0) && (count != n)){
        avail -= 5*(count+1);
        count++;
        }
    cout <<  count << endl;

    return 0;
}

