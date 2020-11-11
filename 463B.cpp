
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, in;
    cin >> n;
    vector<int> v(n+1);
    v[0] = 0;
    int e = 0, ans = 0;
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        e += v[i-1] - v[i];
        if (e < 0){
            ans -= e;
            e = 0;
        }
    }
    cout << ans << endl;

    return 0;
}


