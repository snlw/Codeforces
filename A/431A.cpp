

#include<iostream>


using namespace std;


int main(){
    int arr[4];
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    string s;
    cin >> s;
    int calories = 0 ;
    for (int i = 0 ; i < s.length() ; i++){
        int x = (int)s[i] - '0';
        calories += arr[x-1];
    }

    cout << calories << endl;
    return 0;
}

