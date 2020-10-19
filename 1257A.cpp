
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        int distance = min(n-1, abs(a-b)+x);
        cout << distance << endl;
    }

    return 0;
}

