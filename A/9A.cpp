

#include<iostream>


using namespace std;


int main(){
    int y, w;
    cin >> y >> w;
    int dot = 6 - max(y,w) + 1;
    if (dot == 1)
        cout << 1 << '/' << 6 ;
    if (dot == 2)
        cout << 1 << '/' << 3 ;
    if (dot == 3)
        cout << 1 << '/' << 2 ;
    if (dot == 4)
        cout << 2 << '/' << 3 ;
    if (dot == 5)
        cout << 5 << '/' << 6 ;
    if (dot == 6)
        cout << 1 << '/' << 1 ;
        return 0;
}

