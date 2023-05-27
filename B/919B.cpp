
#include<iostream>

using namespace std;

int isperfect(int a){
    int sum = 0;
    while (a){
        sum += a % 10;
        a /= 10;
    }
    return (sum == 10);
};

int main(){
    int k;
    cin >> k;
    int ans = 0;
    while (k){
        ans++;
        if (isperfect(ans))
            k--;
    }
    cout << ans << "\n";

    return 0;
}


