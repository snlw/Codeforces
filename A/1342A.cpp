
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int x, y, a, b, cost;
        cin >> x >> y >> a >> b;
        if (x > y){
            swap(x,y);
        }
        if (2*a <= b){
            cost = (x+y)*a;
        }
        else {
            cost = x*b + (y-x)*a;
        }
        cout << cost << endl;
    }

    return 0;
}


