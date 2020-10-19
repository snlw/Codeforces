
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, score, sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            cin >> score;
            sum += score;
        }
        cout << min(sum, m) << endl;
    }

    return 0;
}

