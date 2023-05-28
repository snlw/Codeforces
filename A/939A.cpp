
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    bool tri = false;
    for (int i = 1; i <= n ;i++){
        if (a[a[a[i]]] == i)
            tri = true;
    }
    cout << (tri? "YES":"NO") ;

    return 0;
}

