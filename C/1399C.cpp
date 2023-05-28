
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, in;
        cin >> n;
        vector<int> w(n+1);
        for (int i = 0; i < n; i++)
            cin >> w[i];
        sort(w.begin(), w.end());
        int ans = 0;
        for (int sum = 1; sum <= 100; sum++){
            int count = 0;
            for (int left = 0, right = n-1; left < right;){
                if (w[left]+w[right] == sum)
                    count++, left++, right--;
                else if (w[left] + w[right] < sum)
                    left++;
                else
                    right--;
            }
            ans = max(ans, count);
        }
        cout << ans << "\n";
    }
    return 0;
}


