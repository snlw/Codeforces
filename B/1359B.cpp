
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        // Check if 2 1x1 tile is cheaper than 1 1x2 tile
        bool twoischeaper = false;
        if (2*x <= y)
            twoischeaper = true;
        int cost = 0;
        for (int row = 0; row < n; row++){
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++){
                if (s[i] == '.' && s[i+1] =='.'){
                    if (twoischeaper){
                        cost += 2*x;
                    }
                    else
                        cost += y;
                    i++;
                }
                else if (s[i] == '.')
                    cost += x;
            }
        }
        cout << cost << endl;
    }

    return 0;
}


