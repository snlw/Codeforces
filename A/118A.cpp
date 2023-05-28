
#include<iostream>
#include<vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> ans;
    for (int i = 0; i < s.length(); i++){
        int k = s[i];
        if (k < 97)
            k += 32;
        if (k!=97 && k!=101 && k!=105 && k!=111 && k!=117 && k!=121)
            cout << "." << (char)k;
    }

    return 0;
}

