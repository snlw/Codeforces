
#include<iostream>

using namespace std;
int a[1000010];
long long count[1000010];

int main(){
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    long long ans = 0;
    if (sum % 3 == 0){
        long long eql = sum/3;
        long long check = 0;
        for (int i = n-1; i >= 0; i--){
            check += a[i];
            if (check == eql)
                count[i] = 1;
        }
        for (int i = n-2; i>=0; i--){
            count[i] += count[i+1];
        }
        check = 0;
        for (int i = 0; i+2 < n; i++){
            check += a[i];
            if (check == eql)
                ans += count[i+2];
        }
    }
    cout << ans << endl;
    return 0;
}


