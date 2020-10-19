

#include<iostream>


using namespace std;


int main(){
    int n; 
    cin >> n; 
    int count = 0 ;
    int home[n], away[n];
    for (int i = 0 ; i < n ; i++){
        cin >> home[i] >> away[i];
        for (int j = 0; j < i ; j++){
            if (home[i] == away[j]){
                count++;
            }
            if (home[j] == away[i]){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

