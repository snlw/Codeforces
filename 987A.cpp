
#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main(){
    map<string, string> g;
    
    g["purple"] = "Power";
    g["green"] = "Time";
    g["blue"] = "Space";   
    g["orange"] = "Soul";
    g["red"] =  "Reality";
    g["yellow"] =  "Mind";
    
    int n;
    string s;

    cin >> n ;
    cout << 6 - n << endl;
    
    for (int i = 0; i < n ; i++){
        cin >> s;
        g[s] = "x";
    }
    auto itr = g.begin();
    while (itr != g.end()){
        if (itr -> second != "x")
            cout << itr -> second << endl;
        itr++;
    }


    return 0;
}


