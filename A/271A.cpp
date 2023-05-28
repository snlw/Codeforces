

#include<iostream>
#include<algorithm>
#include<string> 

using namespace std;

bool isdistinct(int s_int){
    string s = to_string(s_int);
    int len = s.length();
    sort(s.begin(), s.end());
    auto u = unique(s.begin(), s.end());
    s.erase(u, s.end());
    if (s.length() == len){
        return true;
    }
    return false;
};

int main(){
    int year; 
    cin >> year; 
    while (isdistinct(year+1) == false){
        year++;
    }
    cout << year+1 << endl;
    




    return 0;
}

