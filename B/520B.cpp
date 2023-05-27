
#include<iostream>

using namespace std;

int main(){
    int n, m, c=0;
    cin >> n >> m;
    if (m <=n){
        cout << n-m;
        return 0;
    }
    while (n< m){
        if (m%2 == 0)
            m /= 2;
        else
            m++;
        c++;
    }
    cout << c+n-m;
    return 0;
}


