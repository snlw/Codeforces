
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int extra = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n-1; i++){
        int check = k - v[i] - v[i+1];
        if (check > 0){
            extra += check;
            v[i+1] += check;
        }
    }
    cout << extra << "\n";
    for (int it: v)
        cout << it << " ";

    return 0;
}


