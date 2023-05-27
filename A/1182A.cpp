
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans;
    if (n % 2 == 1)
        ans = 0;
    else 
        ans = pow(2, n/2);
    cout << ans << endl;

    return 0;
}


