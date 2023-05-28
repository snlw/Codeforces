
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> finddivisors(int n){
    vector<int> divs;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            divs.push_back(i);
    }
    return divs;
};

bool check(int a, int b, int n){
    int c = n/a/b;
    return (a*b*c == n);
};

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> divs = finddivisors(n);
        if (divs.size() < 3)
            cout << "NO" << "\n";
        else{
            cout << "YES" << "\n";
            int ctr = 1;
            int a = divs[0];
            int b = divs[ctr];
            while (!check(a, b, n)){
                b = divs[ctr++];
            }
            cout << a << " " << b << " " << n/a/b << "\n";
        }
    }
    return 0;
}



