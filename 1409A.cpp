

#include<iostream>


using namespace std;


int main(){
    int t ; 
    cin >> t; 
    for (int i = 0 ; i < t ; i ++ ){
        int a,b; 
        cin >> a >> b;
        int diff = abs(b-a);
        int moves; 
        if (diff == 0 ){
            moves = 0;
        }else if (diff%10 == 0){
            moves = diff/10;
        }
        else{
            moves = diff/10 +1;
        }
        cout << moves << endl;
    }

    return 0;
}

