
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> b;
    int streak = 0;
    for (int i = 0 ; i < s.length(); i++){
        if (s[i] == 'B')
            streak++;
        if (s[i] == 'W' && streak != 0){
            b.push_back(streak);
            streak = 0; 
        }
        if (i == s.length()-1 && s[i] == 'B')
            b.push_back(streak);
    }
    cout << b.size() << endl;
    for (int i: b)
        cout << i << " ";

    return 0;
}

