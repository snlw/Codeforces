
#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int compote = min(c/4, min(b/2,a));
    cout << 7*compote;

    return 0;
}

