

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int t ;
    cin >> t; 
    for (int i = 0 ; i < t; i++){
        int n, in;
        cin >> n; 
        vector<int> a;
        for (int j = 0; j < n; j++){
            cin >> in;
            a.push_back(in);
        }
        vector<int>::iterator ip;
        sort(a.begin(),a.end());
        ip = unique(a.begin(), a.end());
        a.resize(distance(a.begin(),ip));
        //for (ip = a.begin(); ip != a.end(); ip++){
        //    cout << *ip << " " ;
        //}
        
        cout << a.size() << endl;
    }

    return 0;
}


