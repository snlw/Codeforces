
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n ;
    bool good = false;
    for (int i = 0; i < n; i++){
        string name;
        int before, after;
        cin >> name >> before >> after;
        if (before >= 2400 && after > before){
            good = true;
            break;
        }
    }
    cout << (good? "YES":"NO");

    return 0;
}

