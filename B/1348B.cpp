
#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k, in;
        cin >> n >> k;
        set<int> s;
        for (int i = 0 ; i < n; i++){
            cin >> in;
            s.insert(in);
        }

        if (s.size() > k)
            cout << -1;
        else{
            cout << n*k << "\n";
            for (int i = 0 ; i < n; i++){
                for (int it: s)
                    cout << it << " ";
                for (int j = 0; j < k-s.size(); j++)
                    cout << 1 << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}


