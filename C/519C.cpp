
#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0 ; i <= n; i++){
        int leftover = m - 2*i; 
        int x = i;
        if (leftover < 0)
            x = 0;
        else if (leftover > 0){
            leftover = min((n-i)/2, m-2*i);
            x += leftover;   
        }
        ans = max(ans, x);
    }
    cout << ans << endl;


    return 0;
}


