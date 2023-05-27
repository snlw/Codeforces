
#include<iostream>

using namespace std;

int main(){
    int n, input;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n; i++){
        cin >> input;
        if (input % 2 == 1){
            cout << input << " ";
        }
        else
            cout << input - 1 << " ";
    }

    return 0;
}

