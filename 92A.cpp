
#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int walrus = 1;
    while (m){
        if (m >= walrus){
            m -= walrus;
            walrus++;
        }
        else{
            cout << m;
            break;
        }
        if (walrus > n)
            walrus = 1;
        if (m == 0)
            cout << 0;
    }

    return 0;
}

