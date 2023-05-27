
#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        int odd = 0;
        int sum = 0;
        for (int j = 0; j < n ; j++){
            int input;
            cin >> input;
            if (input % 2 == 1){
                odd++;
            }
            sum += input;
        }
        int even = n - odd;
        if (sum % 2 != 0 || sum == 1){
            cout << "YES" << endl;
        }
        else if (odd != 0 && even != 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

