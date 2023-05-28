
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n, m, ans;
    float in;
    cin >> n >> m;
    vector<int> line(n);
    for (int i = 0; i < n; i++){
        cin >> in;
        line[i] = ceil(in/m);
    }
    int mx = *max_element(line.begin(), line.end());
    for (int i = n - 1; i >= 0; i--){
        if (line[i] == mx){
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}


