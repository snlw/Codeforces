
#include<iostream>

using namespace std;

const int N = 50000;

bool check_prime(int y){
    for (int i = 2; i <min(N, y); i++ ){
        if (y % i == 0)
            return 0;
    }
    return 1;
}

bool ashlose(int n){
    bool lose = (n == 1);
    if (n > 2 && n % 2 ==0){
        if ((n & (n-1)) == 0)
            lose = 1;
        else if (n % 4 != 0 && check_prime(n/2))
            lose = 1;
    }
    return lose;
}

int main(){
    int t, in;
    cin >> t;
    while(t--){
        cin >> in;
        cout << (ashlose(in)? "FastestFinger" : "Ashishgup") << "\n";
    }

    return 0;
}


