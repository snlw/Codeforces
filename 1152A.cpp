
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, input;
    cin >> n >> m;
    vector<int> evenodd(4);
    for (int i = 0; i < n; i++){
        cin >> input;
        if (input % 2 == 0)
            evenodd[0]++;
        else 
            evenodd[1]++;
    }
    for (int i = 0; i < m; i++){
        cin >> input;
        if (input % 2 == 0)
            evenodd[2]++;
        else
            evenodd[3]++;
    }
    int ans = min(evenodd[0], evenodd[3])+min(evenodd[1], evenodd[2]);
    cout << ans;

    return 0;
}

