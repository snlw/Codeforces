
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int fibo1 = 2, fibo2 = 3;
    if (n == 1)
        cout << 'O';
    else{
        cout << 'O' << 'O';
        for (int i = 3; i <=n; i++){
            if (i == fibo2)
                cout << 'O';
            else
                cout << 'o';
            if (i >= fibo2){
                swap(fibo1, fibo2);
                fibo2 += fibo1;
            }
        }
    }
    return 0;
}

