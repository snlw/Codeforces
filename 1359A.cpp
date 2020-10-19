
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        int points;
        if (n/k >= m)
            points = m;
        else{
            int y;
            y = (m - n/k)/(k-1);
            if ((m-n/k)%(k-1) != 0)
                y++;
            points = n/k - y;
        }
        cout << points << endl;
    }
    return 0;
}


