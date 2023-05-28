
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int in;
        int a[4];
        int even = 0, odd = 0;
        for (int i = 0; i < 4; i++){
            cin >> in;
            if (in % 2 == 0)
                even++;
            else
                odd++;
            a[i] = in;
        }
        bool can = false;
        if (even > 2)
            can = true;
        else if (a[0] > 0 && a[1] > 0 && a[2] > 0){
            even = 0;
            a[0]--;
            a[1]--;
            a[2]--;
            a[3] += 3;
            for (int i = 0; i < 4; i++){
                if (a[i] % 2 == 0)
                    even++;
            }
            if (even > 2)
                can = true;
        }
        cout << (can ? "Yes" : "No") << "\n";
    }
    return 0;
}


