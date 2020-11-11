
#include<iostream>

using namespace std;

int a[1000];
int n;

void solve(){
    int alice = a[0], bob = 0, target = a[0], moves = 1;
    int l = 1, r = n - 1;
    bool bobturn = true;
    while (l <= r){
        int eaten = 0;
        if (bobturn){
            while (eaten <= target && r >= l){
                eaten += a[r];
                r--;
            }
            bobturn = false;
            bob += eaten;
        }
        else{
            while (eaten <= target && l <= r){
                eaten += a[l];
                l++;
            }
            bobturn = true;
            alice += eaten;
        }
        target = eaten;
        moves++;
        // cout << l << ' ' << r << endl;
    }
    cout << moves << ' ' << alice << ' ' << bob << endl;

}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0 ; i < n; i++)
            cin >> a[i];
        solve();
    }

    return 0;
}

