
#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        int a = (int)s[i] - 48;
        int b = 9 - a;
        if (i == 0 && b == 0)
            cout << a;
        else
            cout << min(a,b);
    }
    return 0;
}
