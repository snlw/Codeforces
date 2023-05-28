
// R in the last column 
// D in the last row
#include<iostream>
#include<vector>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<char> v;
        char c;
        int count = 0;
        for (int i = 0; i < n*m; i ++){
            cin >> c;
            v.push_back(c);
        }
        // Check for R in last columns 
        for (int i = m-1; i < n*m; i+=m){
            if (v[i] == 'R')
                count++;
        }
        for (int i = (n-1)*m ; i < n*m; i++){
            if (v[i] == 'D')
                count++;
        }
        cout << count << endl;
    }

    return 0;
}

