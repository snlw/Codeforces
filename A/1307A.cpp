
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, d;
        cin >> n >> d;
        int bales[105];
        for (int i = 1; i <= n; i++)
            cin >> bales[i];
        while (d--){
            for (int i = 2; i<=n; i++){
                if (bales[i] > 0){
                    bales[i]--;
                    bales[i-1]++;
                    break;
                }
            }
        }
        cout << bales[1] << endl;
    }
    return 0;
}

