
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    int n, k, rating;
    cin >> n >> k;
    vector<int> v;
    set<int> el;
    for (int i = 0 ; i < n; i++){
        cin >> rating;
        if(!el.count(rating)){
            v.push_back(i);
            el.insert(rating);
        }
    }
    if (int(v.size()) < k)
        cout << "NO";
    else{
        cout << "YES" << endl;
        for (int i = 0 ; i < k; i++){
            cout << v[i] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}

