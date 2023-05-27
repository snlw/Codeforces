
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, in;
    cin >> n;
    int change25 = 0, change50 = 0;
    bool cansell= true;
    while (n--){
        cin >> in;
        if (in == 25)
            change25++;
        else if (in == 50){
            if (change25 == 0){
                cansell = false;
                break;
            }
            change50++;
            change25--;
        }
        else{
            if (change50 > 0 && change25 > 0){
                change50--;
                change25--;
            }
            else if (change50 == 0 && change25 > 2)
                change25 -= 3;
            else{
                cansell = false;
                break;
            }
        }
    }
    cout << (cansell ? "YES":"NO");

    return 0;
}



