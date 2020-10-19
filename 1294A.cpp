

#include<iostream>


using namespace std;


int main(){
    int t; 
    cin >> t; 
    for (int i = 0; i < t; i++){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int sum = a+b+c+n;
        if (sum%3 != 0 || sum/3 <a || sum/3 <b|| sum/3 <c){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}

