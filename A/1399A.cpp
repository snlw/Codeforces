
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t; 
    cin >> t; 
    for (int i = 0 ; i < t ; i++){
        int size;
        cin >> size;
        int a[size] ;
        for (int j = 0; j < size ; j++){
            cin >> a[j];
        }
        sort(a, a+size);
        
        bool yesno = true;
        for (int k = 0 ; k < size -1 ; k++){
            if (abs(a[k]-a[k+1]) > 1){
                yesno = false;
                break;
            }
        }
        if (yesno){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }
    return 0 ;
}
