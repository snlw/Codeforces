
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int input, sum =0;
    for (int i = 0; i < n; i++){
        cin >> input;
        sum += abs(input);
    }
    cout << sum;


    return 0;
}

