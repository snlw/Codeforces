
#include<iostream>

using namespace std;

bool islucky(int n){
    int lucky = 0, digits = 0;
    while(n){
        if (n%10 == 7 || n%10 == 4){
            lucky++;
        }
        digits++;
        n /= 10;
    }
    if (lucky == digits)
        return true;
    return false;
};

int main(){
    int n;
    cin >> n;
    bool ans = false;
    if (islucky(n))
        ans = true;
    else{
        for (int i = 2; i <= 744; i++){
            if (n % i == 0 && islucky(i)){
                ans = true;
                break;
            }
        }
    }
    cout << (ans? "YES":"NO");
    return 0;
}

