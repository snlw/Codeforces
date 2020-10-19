
#include<iostream>

using namespace std;

int main(){
    int n, m, d;
    cin >> n >> m;
    int cur = 1;
    long long int time = 0;
    for (int i = 0; i < m; i++){
        cin >> d;
        if (d >= cur){
            time += d - cur;
        }
        else {
            time += n - cur + d;
        }
        cur = d;
    }
    cout << time;
    return 0;
}


