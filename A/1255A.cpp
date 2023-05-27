
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int moves = 0;
        if (abs(a-b) < 5){
            moves = abs(a-b)/2 + abs(a-b)%2;
        }
        else{
            moves = abs(a-b)/5 + (abs(a-b)%5)/2 + ((abs(a-b)%5)%2);
        }
        cout << moves << endl;
    }

    return 0;
}

