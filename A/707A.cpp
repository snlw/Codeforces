

#include<iostream>


using namespace std;


int main(){
    int n,m;
    cin >> n >> m; 
    char c;
    bool iscolor = false;
    for (int i = 0 ; i < n*m ;i ++){
        cin >> c;
        if (c == 'C'||c == 'M'||c=='Y'){
            iscolor = true;
            break;
        }
    }
    if (iscolor){
        cout << "#Color" << endl;
    }
    else{
        cout << "#Black&White" << endl;
    }

    return 0;
}

