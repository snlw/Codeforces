
#include<iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if ((!x && !y && !z)||(!z && x == y)){
        cout << 0;
        return 0;
    }
    if (x > y + z)
        cout << "+";
    else{
        if (y > x + z)
            cout << "-";
        else 
            cout << "?";
    }
    return 0;
}

