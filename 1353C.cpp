
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        long long moves = 0;
        cin >> n;
        for (int i = 1; i <= n/2; i++){
            moves += i*1ll*i;
        }
        cout << moves*8 << endl;
    }

    return 0;
}


