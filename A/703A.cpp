

#include<iostream>


using namespace std;


int main(){
    int n; 
    cin >> n ;
    int count = 0;
    for (int i = 0 ; i < n ; i ++){
        int m, c;
        cin >> m >> c;
        if (m>c){
            count +=1;
        }
        else if (m < c){
            count-= 1;
        }
    }
    if (count > 0){
        cout << "Mishka" << endl;
    }
    if (count < 0){
        cout << "Chris" << endl;
    }
    if (count == 0){
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}

