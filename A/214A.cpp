
#include<iostream>

using namespace std;

int main(){
    int n, m, pairs = 0;
    cin >> n >> m;
    for (int i = 0; i <= 32; i++){
        for (int j = 0; j <= 32; j++){
            if (i*i + j == n && j*j + i ==m){
                pairs++;
            }
        }
    }
    cout << pairs;

    return 0;
}

