#include<iostream>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i =0; i< n; i++)
        cin >> a[i];
    int ans = 0, sum = 0, left = 0;
    for (int right = 0 ; right < n; right++){
        sum += a[right];
        while (sum > t)
            sum -= a[left++];
        ans = max(ans, right-left+1);
    }
    cout << ans << endl;
    return 0;
}
