
#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> a){
    int odd = 0, even = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] % 2 ==0)
            even++;
        else
            odd++;
    }
    bool exist;
    if (even%2 == 0 && odd%2 == 0)
        return exist = true;
    else{
        for (int i = 0; i < a.size(); i++){
            for (int j = i+1; j < a.size(); j++){
                if (abs(a[i] - a[j]) == 1)
                    return exist = true;
            }
        }
    }
    return exist = false;
};


int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int> v(n);
        for (int i = 0 ; i < n; i++)
            cin >> v[i];
        cout << (check(v)? "YES":"NO") << endl;
    }

    return 0;
}


