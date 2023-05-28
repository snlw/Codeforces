



#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int n, x;
    cin >> n;
    vector<int> a(101);
    for (int i = 0 ; i < n ; i++){
        cin >> x;
        a[x]++;
    }
    cout << *max_element(a.begin(), a.end()) << endl;
    return 0;
}


