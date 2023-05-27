#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main(){
    int s, n, x, y;
    cin >> s >> n;
    vector<pair<int,int>> v;
    for (int i = 1; i <= n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());

    bool clear = true;
    for (auto &it: v){
        if (s > it.first){
            s+= it.second;
        }
        else{
            clear = false;
            break;
        }
    }
    cout << (clear? "YES":"NO");

    return 0;
}

