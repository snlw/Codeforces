
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int key = *max_element(a,a+n) - *min_element(a,a+n) - n + 1;
    cout << key;

    return 0;
}

