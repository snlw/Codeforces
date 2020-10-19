
#include<iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ops = 0;
    for (int i = 0; i < n; i+=2){
        if (s[i]=='b' && s[i+1] =='b'){
            s[i] = 'a';
            ops++;
        }
        else if (s[i] =='a' && s[i+1] =='a'){
            s[i] = 'b';
            ops++;
        }
    }
    cout << ops << endl;
    cout << s << endl;


    return 0;
}

