

#include<iostream>


using namespace std;


int main(){
    int t; 
    cin >> t;
    for (int i = 0; i < t ; i++){
        int n, m, lamps;
        cin >> n >> m; 
        int sq = n*m;\
        if (sq % 2 == 1){
            lamps = sq/2 + 1;
        }
        else{
            lamps = sq/2;
        }
        cout << lamps << endl;
    }

    return 0;
}

