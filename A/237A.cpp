
#include<iostream>

using namespace std;

int main(){
    int n, c = 1, ans = 1;
    cin >> n;
    int prevh, prevm;
    cin >> prevh >> prevm;
    //Since the timings are given in chronological order
    for (int i = 0; i < n - 1; i++){
        int h, m;
        cin >> h >> m;
        if (h == prevh && m == prevm)
            c++;
        else
            c = 1;
        prevh = h;
        prevm = m;
        ans = max(ans, c);
    }
    cout << ans << "\n";


    return 0;
}


