

#include<iostream>
#include<string>

using namespace std;


int main(){
    int n; 
    cin >> n; 
    int faces = 0;
    for (int i = 0 ; i < n ; i++){
        string s; 
        cin >> s; 
        string sub = s.substr(0,3);
        if (sub == "Tet"){
            faces += 4;
        }
        if (sub == "Cub"){
            faces+= 6;
        }
        if (sub == "Oct"){
            faces += 8;
        }
        if (sub == "Dod"){
            faces += 12;
        }
        if (sub == "Ico"){
            faces += 20;
        }
    }
    cout << faces << endl;




    return 0;
}

