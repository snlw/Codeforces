
#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ans;
    if (b > a)
        ans = a;
    else{
        ans = 0;
        while (a>0){
            if (a >= b){
                a = a-b+1;
                ans += b;
            }
            else{
                ans += a;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}


