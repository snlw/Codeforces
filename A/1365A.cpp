#include<iostream>
#include<algorithm>
#include<set>

const int N = 51;
int a[N][N];

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        set<int> r, c;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++){
                cin >> a[i][j];
                if (a[i][j] == 1)
                    r.insert(i), c.insert(j);
            }
        int x = min(n - r.size(), m - c.size());
        cout << (x % 2 ? "Ashish":"Vivek") << endl;
    }

    return 0;
}



