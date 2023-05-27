
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m, in;
    cin >> n;
    vector<int> a;
    int worms = 0;
    for (int i = 1; i <= n; i++){
        cin >> in;
        worms += in ;
        a.push_back(worms);
    }
    cin >> m;
    for (int i = 1; i <= m; i++){
        cin >> in;
        vector<int>::iterator f = lower_bound(a.begin(), a.end(), in);
        cout << f - a.begin() + 1 << endl;
    }
    return 0;
}
