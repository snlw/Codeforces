
#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        bool Polycarp = true;
        int p1 = 0, c1 = 0, p2, c2;
        for (int i = 0; i < n; i++){
            cin >> p2 >> c2;
            if (abs(c2-c1) > abs(p2-p1))
                Polycarp = false;
            if (p2 < p1 || c2 < c1)
                Polycarp = false;
            p1 = p2;
            c1 = c2;
        }
        cout << (Polycarp? "YES":"NO") << "\n";
    }

    return 0;
}


