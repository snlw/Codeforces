
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, q, m;
    cin >> n;
    int shops[n];
    for (int i = 0 ; i < n ; i++)
        cin >> shops[i];
    sort(shops, shops + n);
    cin >> q;
    int coins[q];
    for (int i = 0 ; i < q ; i++)
        cin >> coins[i];
    for(int i = 0; i < q; i++){
        cout << upper_bound(shops, shops+n, coins[i]) - shops << endl;
    }
        return 0;
}
