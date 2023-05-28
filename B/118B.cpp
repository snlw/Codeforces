
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // Print top half 
    for (int row = 0; row < n; row++){
        cout << string(2*(n-row), ' ');
        cout << 0;
        for (int i = 1; i <= row; i++)
            cout << " " << i;
        for (int i = row-1; i > 0; i--)
            cout << " " << i;
        if (row)
            cout << " " << 0;
        cout << "\n";
    }
    // Print middle row
    cout << 0;
    for (int i = 1; i <= n; i++)
        cout << " " << i;
    for (int i = n - 1; i > 0; i--)
        cout << " " << i ;
    cout << " " << 0 << "\n";

    // Print bottom half
    for (int row = n - 1; row >= 0; row--){
        cout << string(2*(n-row), ' ');
        cout << 0;
        for (int i = 1; i <= row; i++)
            cout << " " << i;
        for (int i = row - 1; i > 0; i--)
            cout << " " << i;
        if (row)
            cout << " " << 0;
        cout << "\n";
    }

    return 0;
}
