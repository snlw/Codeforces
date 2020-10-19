
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n*n/2 << endl;
    else 
        cout << (n*n+1)/2 << endl;
    string s1, s2;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            s1.append("C");
            s2.append(".");
        }
        else{
            s1.append(".");
            s2.append("C");
        }
    }
    for (int i = 0; i < n; i++){
        if (i % 2 == 0)
            cout << s1 << endl;
        else 
            cout << s2 << endl;
    }
    return 0;
}

