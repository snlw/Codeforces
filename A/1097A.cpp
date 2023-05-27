

#include<iostream>


using namespace std;


int main(){
    string ontable; 
    cin >> ontable;
    bool playable = false;
    for (int i = 0; i < 5; i++){
        string inhand;
        cin >> inhand;
        if ((ontable[0] == inhand[0])||(ontable[1] == inhand[1])){
            playable = true;
            break;
        }
    }
    if (playable){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}

