
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> sys(n);
    vector<int> reach;
    for (int i = 1 ; i < n; i++)
        cin >> sys[i];
    int curr = 1;
    reach.push_back(curr);
    while (curr < n){
        curr += sys[curr];
        reach.push_back(curr);
        }
    bool can = false;
    for (int it:reach){
        if (it == t){
            can = true;
            break;
        }
    }
    cout << (can?"YES":"NO"); 
    return 0;
}

