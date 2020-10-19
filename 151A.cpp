
#include<iostream>

using namespace std;


int main(){
    int n , k , l, c , d, p , nl , np ;
    cin >> n >> k >> l >> c;
    cin >> d >> p >> nl >> np;

    int toast = min((k*l/nl),min((d*c),(p/np)));
    
    cout << toast/n << endl;

    return 0;
}


