
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int l = s.length();
        if (s[l-1] == 'o' && s[l-2] =='p')
            cout << "FILIPINO" << endl;
        else if (s[l-1] =='u' && s[l-2] == 's')
            cout << "JAPANESE" << endl;
        else 
            cout << "KOREAN" << endl;
    }

    return 0;
}

