
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int k;
        string s;
        cin >> k >> s;
        vector<int> a;
        for (int i = 0 ; i < k ; i++){
            if (s[i] == 'A')
                a.push_back(i);
            if (i == k-1 && s[i] == 'P'){
                a.push_back(k);
            }
        } 
        int longestp = 0;
        for (int i =1 ; i<a.size(); i++){
            longestp = max(longestp, a[i]-a[i-1]-1);
        }
        cout << longestp << endl;
    }
    return 0;
}

