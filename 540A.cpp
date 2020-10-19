

#include<iostream>


using namespace std;


int main(){
    int n; 
    char og[1001] , af[1001];
    cin >> n >> og >> af;
    int moves = 0;
 
    for (int i = 0 ; i < n ; i++){
        int a,b;
        a = og[i] - '0';
        b = af[i] - '0';
        moves += min(abs(a-b), 10 - abs(a-b));
    }
    cout << moves << endl;
    return 0;
}

