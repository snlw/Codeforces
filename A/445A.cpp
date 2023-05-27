
#include<iostream>

using namespace std;

int main(){
    int row, col;
    cin >> row >> col; 
    char in ;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> in;
            if (in == '.'){
                if (i % 2 == 0){
                    if (j % 2 == 0)
                        cout << 'B';
                    else
                        cout << 'W';
                }
                else{
                    if (j % 2 == 0)
                        cout << 'W';
                    else 
                        cout << 'B';
                }
            }
            else
                cout << in;
        }
        cout << endl;
    }

    return 0;
}



