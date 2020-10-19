

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, input, steps = 0, sum = 0;
        cin >> n;
        for (int i = 0 ; i < n ; i++){
            cin >> input;
            if (input == 0){
                steps++;
            }
            sum += input;
        }
        sum += steps;
        if (sum == 0){
            steps++;
        }
        cout << steps << endl;
    }

    return 0;
}

