
#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        if (set<char>(s.begin(), s.end()).size() ==s.length() && *max_element(s.begin(), s.end()) == char(*min_element(s.begin(), s.end())+ (s.length()-1))){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

