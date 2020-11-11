
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x1, y1, z1, x2, y2, z2;
        int sum = 0;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        // Maximise a = 2, b = 1 to get net +2;
        int d = min(z1, y2);
        sum += 2*d;
        z1 -= d;
        y2 -= d;
        // Maximise a = 0, b = 2 to negate deduction
        d = min(x1, z2);
        x1 -= d;
        z2 -= d;
        // Maximuse a = 1, b = 0
        d = min(y1, x2);
        y1 -= d;
        x2 -= d;
        // Final update of sum, remove remaining a = 1, b = 2; 
        sum -= 2*min(y1, z2);
        cout << sum <<  "\n";
    }

    return 0;
}


