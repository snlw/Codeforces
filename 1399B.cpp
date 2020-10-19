

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int t ;
    cin >> t ;
    for ( int i = 0 ; i < t ; i++ ){
        int n;
        cin >> n; 
        int a[n] , b[n];
        for (int j = 0 ; j < n ; j++){
            cin >> a[j];
        }
        for (int j = 0 ; j < n ; j++){
            cin >> b[j];
        }
        int mincandies = *min_element(a,a+n);
        int minoranges = *min_element(b,b+n);
        long long moves = 0;
        for (int j = 0 ; j < n ; j++){
            moves += max(a[j]-mincandies,b[j]-minoranges);
        } 
        cout << moves << endl;
        }
   
    return 0;
}

