
#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool change = true;
    char ans;
    for (int i = 1; i<s.length(); i++){
        if(islower(s[i]))
            change = false;
    }
    if (change){
        for (int i = 0; i < s.length(); i++){
            if (islower(s[i]))
                ans = toupper(s[i]);
            else
                ans = tolower(s[i]);
            cout << ans;
        }
    }
    else 
        cout << s;
    return 0;
}

