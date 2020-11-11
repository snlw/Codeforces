
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int doors[n];
    for (int i = 0; i < n; i++)
        cin >> doors[i];
    int ans;
    for (int i = n-1; i >= 0; i--){
        if (doors[i] != doors[i-1]){
            ans = i;
            break;
        }
    }
    cout << ans << "\n";

    return 0;
}


