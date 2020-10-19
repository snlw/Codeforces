


#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int t ; 
    cin >> t; 
    for ( int i = 0 ; i < t ; i++ ){
        int n, v1; 
        cin >> n >> v1; 
        vector<int> v;
        v.push_back(v1);
        cout << v1 << " ";
        for (int j = 1; j < 2*n ; j++){
            int input;
            cin >> input;
            bool wasinarray = false;
            for (int k = 0; k<v.size(); k++){
                if (v[k] == input){
                    wasinarray = true;
                }
            }
            if (wasinarray){
                continue;
            }
            else{
                v.push_back(input);
                cout << input << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

