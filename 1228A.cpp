
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    for (int x = l; x <= r; x++){
        bool dis = true;
        vector<int> digits(10,0);
        int d = x;
        while (d){
            int digit = d % 10;
            digits[digit]++;
            if (digits[digit] > 1){
                dis = false;
                break;
            }
            d /= 10;
        }
        if (dis == true){
            cout << x;
            return 0;
        }

    }
    cout << -1;
    return 0;
}

