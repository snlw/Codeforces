

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++){
        int a,b;
        cin >> a >> b;
        int diff = b-a;
        int moves;
        if (diff == 0){
            moves = 0;
        }
        else if (((diff%2 == 1) && (diff > 0))||((diff%2 == 0) && (diff < 0))){
            moves = 1;
        }
        else {
            moves = 2 ;
        }
        cout << moves << endl;

    }

    return 0;
}

