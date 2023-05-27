
#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 100005;
int a[MAX];
int b[MAX];

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    int l = 0, r = 0;
    for (int i = 0 ; i < n; i++){
        if (a[i] != b[i]){
            l = i;
            break;
        }
    }
    for (int i = n-1; i>=0; i--){
        if (a[i] != b[i]){
            r = i;
            break;
        }
    }
    for (int i = l, j = r; i <= r; i++, j--){
        if (a[i] != b[j]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << l+1 << " " << r + 1;

    return 0;
}


