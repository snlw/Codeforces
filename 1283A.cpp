

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++){
        int h , m;
        cin >> h >> m;
        int mins = (23-h)*60 + (60-m);
        cout << mins << endl;
    }

    return 0;
}

