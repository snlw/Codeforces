

#include<iostream>
#include<vector>

using namespace std;


int main(){
    int t, n; 
    cin >> t; 
    for (int i = 0 ; i < t ; i++){
        vector<int> ans;
        int power = 1;
        cin >> n; 
        while (n != 0 ){
            if ( n % 10 != 0){
                ans.push_back((n%10)* power);
            }
            n /= 10;
            power *= 10;
        }
        cout << ans.size() << endl;
        for (auto x: ans){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

