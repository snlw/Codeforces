

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    string s; 
    cin >> s ; 
    int lower = 0; 
    int upper = 0; 
    for (int i = 0 ; i < s.length() ; i++){
        if (isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }

    
    if (upper > lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}


