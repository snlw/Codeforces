
#include<iostream>

using namespace std;

int main(){
    int n;
    string s1, s2, in;
    int win = 1;
    cin >> n;
    if (n == 1 || n == 2){
        cin >> s1;
        cout << s1;
    }
    else{
        cin >> s1;
        n--;
        while(n--){
            cin >> in;
            if (in != s1){
                s2 = in;
                win--;
            }
            else
                win++;
        }
        cout << (win>0? s1:s2);
    }
    return 0;
}
