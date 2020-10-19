
#include<iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int currentpos = 1;
    for(int i = 0; i < t.length(); i++){
        if (t[i] == s[currentpos-1]){
            currentpos++;
        }
    }
    cout << currentpos;

    return 0;
}

