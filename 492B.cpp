
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    int lights[1001];
    for (int i = 0; i < n; i++)
        cin >> lights[i];
    sort(lights, lights+n);
    int maxd =max(lights[0], l - lights[n-1])*2;
    for (int i = 1; i < n; i++){
        maxd = max(maxd, lights[i]-lights[i-1]);
    }
    cout.precision(20);
    cout << maxd/2.0 << endl;
    return 0;
}


