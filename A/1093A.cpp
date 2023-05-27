
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x;
        cin >> x;
        int rolls;
        if (x <= 7)
            rolls = 1;
        else{
            rolls = x/2;
        }
        cout << rolls << endl;
    }

    return 0;
}

