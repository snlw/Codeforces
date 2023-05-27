
#include<iostream>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        long long int a[n];
        for (int i = 0 ; i < n ; i++)
            cin >> a[i];
        long long int sum = 0 ;
        for (int i = 0 ; i < n ; i++){
            long long int curr = a[i];
            int j = i;
            while (j < n && a[i]*a[j]>0){
                curr = max(curr, a[j]);
                j++;
            }
            sum += curr;
            i = j - 1;
        }
        cout << sum << endl;
    }
    return 0;
}



