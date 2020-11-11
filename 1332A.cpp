
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        int netx = b - a;
        int nety = d - c;
        bool walkexists = false;
        if ((x == x2 && x == x1) && (a != 0 || b != 0))
            walkexists = false;
        else if ((y == y2 && y == y1) && (c != 0 || d != 0))
            walkexists = false;
        else if ((x + netx <= x2) && (x + netx >= x1) && (y + nety <= y2) && (y + nety >= y1))
            walkexists = true;
        cout << ( walkexists ? "Yes":"No" ) << "\n";
    }

    return 0;
}


