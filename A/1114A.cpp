
#include<iostream>

using namespace std;

int main(){
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    // Satisfy Andrew
    bool happy = false;
    if (a >= x){
        a -= x;
        if (a + b >= y){
            if ( a + b - y + c >= z){
                happy = true;
            }
        }
    }
    cout << (happy? "YES":"NO");

    return 0;
}

