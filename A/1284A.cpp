
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m, q;
    cin >> n >> m;
    vector<string> s(n);
    vector<string> t(m);
    for (int i = 0 ; i < n ; i++)
        cin >> s[i];
    for (int i = 0 ; i < m ; i++)
        cin >> t[i];
    cin >> q;
    while (q--){
        int y;
        cin >> y;
        int counter1 = y;
        int counter2 = y;
        if (counter1 > n){
            counter1 = counter1 % n;
            if (counter1 == 0){
                counter1 = n;
            }
        }
        if (counter2 > m){
            counter2 = counter2 % m;
            if (counter2 == 0){
                counter2 = m;
            }
        }
        
        cout << s[counter1-1] << t[counter2-1] << endl;
    }
    return 0;
}


