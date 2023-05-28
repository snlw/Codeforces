
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long b[n];
    for (int i = 0 ; i < n; i++)
        cin >> b[i];
    long long mx = *max_element(b, b+n);
    long mn = *min_element(b, b+n);
    long long mxcount = 0, mncount = 0;
    for (int i = 0; i < n; i++){
        if (b[i] == mx)
            mxcount++;
        if (b[i] == mn)
            mncount++;
    }
    long long num;
    if (mx == mn){
        num = n*(n-1)/2;
    }
    else{
        num = mxcount*mncount;
    }
    cout << mx-mn << " " << num << endl;
    return 0;
}



