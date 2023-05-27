
#include<iostream>

using namespace std;

int main(){
    int t, a;
    cin >> t;
    while (t--){
        bool build = false;
        cin >> a;
        if (360 % (180-a) == 0){
            build = true;
        }
        cout << (build? "YES":"NO")<< endl;
    }

    return 0;
}


