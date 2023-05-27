
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, in;
        cin >> n;
        vector<int> a(n);
        bool issorted = true;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i){
                if (a[i] - a[i-1] < 0)
                    issorted = false;
            }
        }
        set<int> b;
        for (int i = 0; i < n; i++){
            cin >> in;
            b.insert(in);
        }
        if (b.size() == 2)
            cout << "Yes" << "\n";
        else if (issorted)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";

    }

    return 0;
}


