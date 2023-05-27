

#include<iostream>


using namespace std;


int main(){
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int a = min(k2, min(k5, k6));
    int b = min(k2-a, k3);
    int sum = 256*a + b*32;
    cout << sum << endl;

    return 0;
}

