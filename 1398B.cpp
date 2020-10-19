
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int t;
    cin >> t ;
    while (t--){
        string s;
        cin >> s;
        vector<int> ones;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                int start = i;
                while (s[i+1] == '1' && i< s.length()-1){
                    i++;
                }
                ones.push_back(i-start+1);
            }
        }
        sort(ones.rbegin(), ones.rend());

        int alice = 0;
        for (int i = 0; i < ones.size(); i+=2){
            alice += ones[i];
        }
        cout << alice << endl;
    }

    return 0;
}







