
#include<iostream>
#include<vector>

using namespace std;

int n , k;

void solve(){
    cin >> n >> k;
    vector<int> a(n);
    vector<int> peaks(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n-1; i++){
        if (a[i] > a[i-1] && a[i] > a[i+1])
            peaks[i] = peaks[i-1] + 1;
        else 
            peaks[i] = peaks[i-1];
    }
    // Last element 
    peaks[n-1] = peaks[n-2];
    int anspeaks = 0, ansl = 1;
    for (int i = 0; i < n-k+1; i++){
        if (peaks[i+k-2] - peaks[i] > anspeaks){
            anspeaks = peaks[i+k-2] - peaks[i];
            ansl = i + 1;
        }      
    }
    cout << anspeaks + 1 << ' ' << ansl << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
