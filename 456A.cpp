
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i = 0 ; i < n ; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    bool alex = false;
    for (int i = 0 ; i < n-1; i++){
        if (v[i].second > v[i+1].second){
            alex = true;
            break;
        }
    }
    cout << (alex?"Happy Alex":"Poor Alex") << endl;
    return 0;
}


