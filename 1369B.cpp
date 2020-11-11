

#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n >> s;
        bool is01 = true;
        // Check if string is 0000001111111 order
        for (int i = 1; i < s.length(); i++){
            if (s[i] < s[i-1]){
                is01 = false;
                break;
            }
        }
        // Check for leading zeros
        int zeros = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '0')
                zeros++;
            else
                break;
        }
        // Check for trailing ones
        int ones = 0;
        for (int i = s.length()-1; i >= 0; i--){
            if (s[i] == '1')
                ones++;
            else
                break;
        }
        if (is01)
            cout << s << "\n";
        else{
            string s1 = string(zeros+1, '0');
            string s2 = string(ones, '1');
            cout << s1 << s2 << "\n";
        }
    }

    return 0;
}



