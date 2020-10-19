

#include<iostream>


using namespace std;


int main(){
    int n, x, d, distresskid = 0; 
    char c;
    cin >> n >> x;
    for (int i = 0 ; i < n; i++){
        cin >> c >> d;
        if (c == '+'){
            x+=d;
        }
        else if (x >= d){
            x -= d;
        }
        else{
            distresskid++;
        }
    }
    cout << x << " " << distresskid ;

    return 0;
}

