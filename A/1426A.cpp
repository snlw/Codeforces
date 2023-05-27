
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x, floor;
        cin >> n >> x;
        if (n <= 2)
            floor = 1;
        else {
            floor = 1 + (n-2)/x;
            if ((n-2)%x != 0){
                floor++;
            }
        }
        cout << floor << endl;
    }

    return 0;
}

