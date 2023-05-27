
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int index = -1;
        for (int i = 0; i < n ; i++){
            if (s[i] == '8'){
                index = i;
                break;
            }
        }
        if (index ==  -1)
            cout << "NO" << endl;
        else{
            if (index <= n-11)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }

    return 0;
}

