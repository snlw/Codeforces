
#include<iostream>

using namespace std;

int numberofmoves(int n, int m){
    int ans = 0;
    int x = m/n;
    while (x % 2 == 0 || x % 3 == 0){
        if (x % 2 == 0)
            x /= 2;
        else if (x % 3 == 0)
            x /= 3;
        ans++;
    }
    if (x == 1)
        return ans;
    else
        return -1;
};

int main(){
    int n, m;
    cin >> n >> m ;
    int ans = 0;
    if (m % n != 0)
        ans = -1;
    else{
        ans = numberofmoves(n, m);
    }
    cout << ans << "\n";
    return 0;
}


