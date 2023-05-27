

#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n; 
    vector<int> m , p , s; 
    for (int i = 1 ; i < n+1 ; i++){
        int input;
        cin >> input; 
        if (input == 1){
            m.push_back(i);
        }
        else if(input == 2){
            p.push_back(i);
        }
        else{
            s.push_back(i);
        }
    }
    int teams = min(min(s.size(),p.size()),m.size());
    cout << teams << endl;
    for (int i = 0 ; i < teams ;i++){
        cout << m[i] << " " << p[i] << " " << s[i] << endl;
    }

    return 0;
}

