
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n, in;
    cin >> n;
    vector<float> v(5);
    for (int i = 0; i < n; i++){
        cin >> in;
        v[in]++;
    }
    int threeone = min(v[1], v[3]);
    int twotwo = v[2]/2;
    int taxi = v[4] + threeone + twotwo;
    v[2]-= twotwo*2;
    v[3]-= threeone;
    v[1]-= threeone;
    if (v[3] != 0)
        taxi += v[3];
    if (v[2] != 0){
        taxi++;
        v[1]-=2;
    }
    if (v[1] > 0){
        taxi += ceil(v[1]/4);
    }

    cout << taxi;
    return 0;
}

