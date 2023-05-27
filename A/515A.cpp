
#include<iostream>

using namespace std;

int main(){
    int a, b, s;
    cin >> a >> b >> s;
    bool drazilmistake = true;
    if (abs(a) + abs(b) > s)
        drazilmistake = false;
    if (abs(a) + abs(b) < s && (s - abs(a) - abs(b))%2 == 1)
        drazilmistake = false;
    cout << (drazilmistake ? "Yes":"NO") << endl;

    return 0;
}



