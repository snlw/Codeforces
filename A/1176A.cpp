
#include<iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while (q--){
        long long int n ;
        cin >> n;
        int moves = 0;
        while (n){
            if (n == 1)
                break;
                
            else if (n % 2 == 0){
                n /= 2;
                moves++;
            }
            else if (n % 3 == 0){
                n *= 2;
                n /= 3;
                moves++;
            }
            else if (n % 5 ==0){
                n *= 4;
                n /= 5;
                moves++;
            }
            else{
                moves = -1;
                break;
            }
        }
        cout << moves << endl;
    }
    return 0;
}
