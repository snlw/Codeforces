

#include<iostream>

using namespace std;


int main(){
    int n;
    string s;
    cin >> n >> s;
    int len = 0;
    int count = 0;
    for (int i = 0; i < n-2; i++){
        if (s[i] =='x' && s[i+1]=='x' && s[i+2]=='x'){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

