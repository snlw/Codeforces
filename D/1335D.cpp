
#include<iostream>

using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while (t--){
        for (int row = 1; row <= 9; row++){
            cin >> s;
            for (int i = 0; i < s.length(); i++){
                if (s[i] == '1')
                    s[i] = '2';
            }
            cout << s << endl;
        }
    }
    return 0;
}

