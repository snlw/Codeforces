
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int r, c;
    cin >> r >> c;
    char input; 
    vector<int> rows(r,0);
    vector<int> cols(c,0);

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> input;
            if (input == 'S'){
                rows[i]++;
                cols[j]++;
            }
        }
    }
    int x = 0, y = 0;
    for (int i = 0; i < r; i++){
        if (rows[i] != 0)
            x++;
    }
    for (int i = 0 ; i < c; i++){
        if (cols[i] != 0)
            y++;
    }
    int cells = r*c - x*y;
    cout << cells << endl;
    return 0;
}
