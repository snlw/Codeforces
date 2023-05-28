
#include<iostream>
#include<algorithm>
#include <iomanip> 
using namespace std;

int main(){
    int n, m;
    float a,b;
    cin >> n >> m;
    float cost[n];
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        cost[i] = (a/b*m);
    }
    printf("%.8f", *min_element(cost, cost+n));

    return 0;
}


