

#include<iostream>


using namespace std;


int main(){
    int q, n, a;
    cin >> q;
    while (q--){
        long long sum = 0;
        cin >> n;
        for (int i = 0 ; i < n; i++){
            cin >> a;
            sum += a;
        }
        int price = sum/n;
        if (price*n >= sum){
            cout << price << endl;
        }
        else{
            cout << price+1 << endl;
        }

    }

    return 0;
}


