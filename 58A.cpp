
#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string h = "hello";
    int idx = 0, correct =0;
    for (int i = 0; i<s.length(); i++){
        if (s[i] == h[idx]){
            idx++;
            correct++;
        }
    }
    cout << ((correct ==5) ? "YES":"NO");
    return 0;
}

