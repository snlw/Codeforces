
#include<iostream>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    if (n==1 && t==10){
        cout << -1; 
        return 0;
    }
    if (t == 10){
        cout << 1;
        for (int i = 0; i < n-1; i++)
            cout << 0;
    }
    else{
        cout << t;
        for (int i = 0; i < n-1; i++)
            cout << 0;
    }


    return 0;
}


