

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int t;
    cin >> t;
    for (int y = 0 ; y < t ; y++){
        int n , k ; 
        cin >> n >> k ; 
        int a[n] , b[n] ;
        for ( int i = 0 ; i < n ; i ++ ){
            cin >> a[i];
        } 
        for ( int j = 0 ; j < n ; j++ ){
            cin >> b[j];
        }
        sort(a,a+n);
        sort(b,b+n, greater<int>());
        for ( int  x = 0 ; x < k ; x++ ){
            for ( int v = 0; v < n; v++ ){
                if (b[v] > a[v]){
                    swap(b[v],a[v]);
                    break;
                }
            }
        }
        int sum = 0; 
        for (int i = 0 ; i < n ; i++){
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0; 
}
