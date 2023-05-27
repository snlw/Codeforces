

#include<iostream>


using namespace std;


int main(){
    int n, left = 0 , right = 0;
    cin >> n;
    char c;
    for (int i = 0 ; i < n; i++){
        cin >> c;
        if (c == 'L')
            left--;
        else
            right++;
    }
    cout << right - left + 1 << endl;

    return 0;
}

