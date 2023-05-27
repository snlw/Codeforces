
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    int n = 4;
    int arr[n];
    for (int i = 0 ; i < 4 ; i++){
        cin >> arr[i];
    }
    for (int i = 0 ; i < 3 ; i++){
        for (int j = i+1 ; j < 4 ; j++){
            if (arr[i] == arr[j]){
                n--;
                break;
            }
        }
    }

    cout << 4-n << endl;
    return 0;
}

