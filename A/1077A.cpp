

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b, k, pos;
        cin >> a >> b >> k;
        pos = (a-b)*(k / 2);
        if (k % 2 == 1){
            pos += a;
        }
        cout << pos << endl;
    }

    return 0;
}

