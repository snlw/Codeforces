
#include<iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    if (a==b)
        cout << -1;
    else 
        cout << max(a.length(), b.length());

    return 0;
}


