#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std; 

int main(){
    char c; 
    cin >> c; 

    string s; 
    int j = 0; 
    while (c != '}'){
        cin >> c;
        if (isalpha(c)){
            s += c;
        }
    }
    sort(s.begin(), s.end());
    auto uni = unique(s.begin(), s.end());
    s.erase(uni, s.end());
    
    cout << s.length() << endl;
    return 0;
}
