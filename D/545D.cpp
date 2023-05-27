
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int time = 0, ans = 0;
    for (int i = 0; i < n; i++){
        if (time <= a[i]){
            ans++;
            time += a[i];
        }
    }
    cout << ans  << "\n";

    return 0;
}



