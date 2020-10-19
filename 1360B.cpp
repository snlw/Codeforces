
#include<algorithm>
#include<iostream>


using namespace std;


int main(){
    int t;
    cin >> t; 
    for (int i = 0 ; i < t ; i++){
        int n; 
        cin >> n ;
        int s[n];
        for (int j = 0 ; j < n ; j++){
            cin >> s[j];
        }
        sort(s,s+n);
        int diff = s[n-1] - s[n-2];
        for (int j = n-2; j >0; j--){
            diff = min(diff, (s[j]-s[j-1]));
        }

        cout << diff << endl;
    }

    return 0;
}

