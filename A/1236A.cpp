
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;
        int ops = 0;
        ops = min(b, (c / 2));
        ops += min(a, ((b-ops)/2));
        cout << ops*3 << endl;
    }

    return 0;
}

