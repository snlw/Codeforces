
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int zeros = 0, ones = 0;
    for (int i = 0 ; i < n; i++){
        if (s[i] == '0')
            zeros++;
        else 
            ones++;
    }
    if (zeros == ones){
        cout << 2 << endl;
        cout << s[0] << " " << s.substr(1,n-1) << endl;
    }
    else {
        cout << 1 << endl;
        cout << s << endl;
    }
    return 0;
}


