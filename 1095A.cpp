

#include<iostream>


using namespace std;


int main(){
    int n;
    string s;
    cin >> n >> s;
    int counter = 1;
    for (int i = 0; i < s.length(); i+=0){
        cout << s[i];
        i += counter;
        counter++;
    }

    return 0;
}

