
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    
    while (n--){
        int bulb;
        cin >> bulb;
        vector<int> ys(bulb);
        for (auto &y: ys){
            cin >> y;
            v[y-1]++;
        }
    }
    for (auto &x: v){
        if (x <= 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}

