
#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int first = 0, second = 0, draw = 0;
    for (int i = 1; i <= 6; i++){
        if (abs(a-i) < abs(b-i))
            first++;
        else if (abs(a-i) == abs(b-i))
            draw++;
        else 
            second++;
    }
    cout << first << " " << draw << " " << second;

    return 0;
}

