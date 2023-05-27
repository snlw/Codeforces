
#include<iostream>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2 && abs(x1-x2) != abs(y1-y2))
        cout << -1;
    else if (x1 == x2){
        int side = abs(y1-y2);
        cout << x1 + side << " " << y1 << " ";
        cout << x2 + side << " " << y2 << " ";
    }
    else if (y1 == y2){
        int side = abs(x1-x2);
        cout << x1 << " " << y1 + side << " ";
        cout << x2 << " " << y2 + side << " ";
    }
    else{
        cout << x1 << " " << y2 << " ";
        cout << x2 << " " << y1 << " ";
    }

    return 0;
}


