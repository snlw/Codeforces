


#include<iostream>


using namespace std;

int main(){
    string s; 
    cin >> s;
    int moves = 0 ;
    char former = 'a';
    for (int i =0 ; i < s.length(); i++){
        moves += min(abs(s[i]-former), (26-abs(s[i]-former)));
        former = s[i];
    }
    cout << moves ;
    return 0;
}


