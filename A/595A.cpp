
#include<iostream>

using namespace std;

int main(){
    int n, m, a, b;
    int l = 0;
    cin >> n >> m;
    for (int i = 1; i<= n; i++){
        for (int j = 1; j <= 2*m; j+=2){
            cin >> a >> b;
            if (a == 1 || b == 1){
                l++;
            }
        }
    }
    cout << l;
    return 0;
}

