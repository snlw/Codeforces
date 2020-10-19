

#include<iostream>


using namespace std;


int main(){
    int t, b, p, f, h, c, profit = 0;
    cin >> t;
    while (t--){
        cin >> b >> p >> f >> h >> c;
        if (h >= c){
            if (2*p > b){
                profit = b/2*h;
            }
            else{
                profit = p*h + min(((b-2*p)/2),f)*c;
            }
        }
        else{
            if (2*f > b){
                profit = b/2*c;
            }
            else{
                profit = f*c + min(((b-2*f)/2),p)*h;
            }
        }
        cout << profit << endl;
    }
    return 0;
}

