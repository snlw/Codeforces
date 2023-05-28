
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        float a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        float pens = ceil(a/c);
        float pencils = ceil(b/d);
        float total = pens + pencils;
        if (total > k){
            cout << -1 << endl;
        }
        else {
            cout << pens << " " << pencils << endl;
        }
        
    }

    return 0;
}


