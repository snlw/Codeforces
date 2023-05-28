

#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i = 0 ; i <t ; i++){
        long long x, y, z;
        cin >> x >> y >>z;
        bool exist = false;
        if (x == y && y == z){
            exist = true;
        }
        int mx = max(x,max(y,z));
        int count = 0;
        if (x == mx){
            count++;
        }
        if (y == mx){
            count ++;
        }
        if (z == mx){
            count++;
        }
        if (count == 2){
            exist = true;
        }
        if (exist){
            cout << "YES" << endl;
            cout << min(x,y) <<" "<< min(y,z)<<" " << min(x,z) << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

