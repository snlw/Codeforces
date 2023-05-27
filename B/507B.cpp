
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    // Maximise x1+r ,y2+r
    double d = sqrt(pow(x2-x1,2)+ pow(y2-y1, 2));
    double ans = ceil(d/(2*r));
    cout << ans;
    return 0;
}



