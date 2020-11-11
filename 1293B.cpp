
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    float ans = 0;
    while (n){
        ans += 1.000000000000/n;
        n--;
    }

    cout << setprecision(12) << ans << endl;

    return 0;
}


