

#include<iostream>
#include<vector>

using namespace std;


int main(){
    int q;
    cin >> q;
    while (q--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        vector <int> a({l1, r1, l2, r2});
        int ans1 = 0 , ans2 = 0;
        for (auto it:a) for (auto jt:a){
            if (it != jt && l1 <= it && it <= r1 && l2 <= jt && jt <= r2){
                ans1 = it;
                ans2 = jt;
                break;
            }
        }
        cout << ans1 << " " << ans2 << endl;
        
    }

    return 0;
}

