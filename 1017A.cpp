
#include<iostream>


using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int thomas = a+b+c+d;
    int ans = 1;
    for (int i = 1; i < n; i++){
        cin >> a >> b >> c >> d;
        if (a+b+c+d > thomas)
            ans++;
    }
    cout << ans;

    return 0;
}

