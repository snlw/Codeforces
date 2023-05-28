

#include<iostream>


using namespace std;


int main(){
    int n; 
    string s; 
    cin >> n >> s; 
    int a = 0; 
    int d = 0;

    for (int i =0; i< s.length(); i++){
        if (s[i] == 'A'){
            a++;
        }
        else{
            d++;
        }
    }
    string output;
    if (a>d){
        output = "Anton";
    }
    else if (a<d){
        output = "Danik";
    }
    else{
        output = "Friendship";
    }
    cout << output << endl;



    return 0;
}

