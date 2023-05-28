

#include<iostream>


using namespace std;


int main(){
    int k, r; 
    cin >> k >> r ; 

    int shovels = 0;
    bool change = true; 
    while (change){
        shovels++;
        int last = (k*shovels);
        if ((last % 10 == r)||(last % 10  == 0)){
            change = false;
        }
        
    }
    cout << shovels << endl;
    return 0;
}

