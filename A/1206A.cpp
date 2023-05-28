
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m, input, maxa=0, maxb=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> input;
        maxa = max(input,maxa);
    }
    cin >> m;
    for (int i = 0; i < m ; i++){
        cin >> input;
        maxb = max(input, maxb);
    }
    cout << maxa << " " << maxb;

    return 0;
}

