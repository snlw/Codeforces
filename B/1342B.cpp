
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        string t;
        cin >> t;
        vector<int> count(2);
        for (int i = 0; i < t.size(); i++){
            if (t[i] == '1')
                count[1]++;
            else
                count[0]++;
        }
        if (count[0] == 0 || count[1] == 0)
            cout << t;
        else{
            for(int i = 0; i < t.size(); i++){
                cout << "10";
            }
        }
        cout << endl;
        
    }

    return 0;
}



