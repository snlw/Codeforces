


#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int l = 0, r = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                l = i;
                break;
            }
        }
        for (int i = s.length()-1; i>=0; i--){
            if (s[i] == '1'){
                r = i;
                break;
            }
        }
        int todelete = 0;
        if (l == r){
            todelete = 0;
        }
        else{
            for (int i = l; i <= r; i++){
                if (s[i] == '0'){
                    todelete++;
                }   
            }
        }
        cout << todelete << endl;
    }
    return 0;
}


