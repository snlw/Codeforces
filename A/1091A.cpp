
#include<iostream>

using namespace std;

int main(){
    int y, b, r;
    cin >> y >> b >> r;
    int mn = min(y+2, min(b+1, r))*3 -3;
    cout << mn;
    return 0;
}
