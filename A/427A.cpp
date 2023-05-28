

#include<iostream>


using namespace std;


int main(){
    int n; 
    cin >> n;
    int police = 0;
    int crime = 0;
    for (int i = 0 ; i < n ; i++){
        int x; 
        cin >> x; 
        if (x > 0){
            police += x; 
        }
        if ((x<0) && (police >0)){
            police += x; 
        }
        else if ((x<0) && (police == 0)){
            crime++;
        }
    }
    cout << crime << endl;
    return 0;
}

