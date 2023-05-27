

#include<iostream>


using namespace std;


int main(){
    int t, n = 0, z = 0;
    cin >> t;
    char c;
    while (t--){
        cin >> c;
        if (c == 'n'){
            n++;
        }
        if (c == 'z'){
            z++;
        }
    }
    while (n--){
        cout << 1 << " ";
    }
    while (z--){
        cout << 0 << " ";
    }
    cout << endl;

    return 0;
}

