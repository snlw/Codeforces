

#include<iostream>


using namespace std;


int main(){
    string s;
    cin >> s;
    int qaq = 0;

    for (int i = 0; i < s.length(); i++){
        for (int j = i+1; j < s.length(); j++){
            for (int k = j+1; k < s.length(); k++){
                if (s[i] == 'Q' && s[j] == 'A' && s[k] =='Q'){
                    qaq++;
                }
            }
        }
    }
    cout << qaq;
    return 0;
}

