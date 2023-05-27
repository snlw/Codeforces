
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ix, iy, iz;
    int x =0, y = 0, z = 0;
    for (int i = 0; i < n; i++){
        cin >> ix >> iy >> iz;
        x += ix;
        y += iy;
        z += iz;
    }
    bool eq = false;
    if (x == 0 && y ==0 && z==0)
        eq = true;
    cout << (eq? "YES":"NO");

    return 0;
}

