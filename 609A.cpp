
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int mem = 0;
    int count = 0;
    int indx = n - 1;
    while (mem < m){
        mem += a[indx];
        indx--;
        count++;
    }
    cout << count ;

    return 0;
}

