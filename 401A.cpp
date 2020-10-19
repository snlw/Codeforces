
#include<iostream>

using namespace std;

int main(){
    int n, x, input;
    cin >> n >> x;
    int sum = 0;
    for (int i = 0 ; i < n; i++){
        cin >> input;
        sum += input;
    }
    if (abs(sum) % x == 0)
        cout << abs(sum)/x;
    else
        cout << abs(sum)/x + 1;


    return 0;
}

