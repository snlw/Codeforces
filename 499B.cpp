
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<string,string>> ab;
    string a, b, in;
    for (int i = 0 ; i < m; i++){
        cin >> a >> b;
        ab.push_back(make_pair(a,b));
    }
    for (int i = 0; i < n; i++){
        cin >> in;
        for (int i = 0; i < m; i++){
            if (in == ab[i].first || in == ab[i].second){
                if (ab[i].first.length() <= ab[i].second.length()){
                    cout << ab[i].first << " ";
                    break;
                }
                else{
                    cout << ab[i].second << " ";
                    break;
                }
            }
        }
    }
    return 0;
}
