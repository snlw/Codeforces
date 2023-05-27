
#include<iostream>

using namespace std;

int main(){
    int n, m, moves;
    cin >> n >> m;
    if (m > n)
        moves = -1;
    else if (m == n)
        moves = n;
    else{
        int max = n;
        int min = n/2 + n%2;
        for (int i = min; i <= max; i++){
            if (i%m == 0){
                moves = i;
                break;
            }
        }
    }
    cout << moves << endl;

    return 0;
}


