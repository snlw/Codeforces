

#include<iostream>
#include <iomanip>

using namespace std;


int main(){
    int n;
    cin >> n;
    double total = 0;
    for (int i = 0 ; i < n ; i++){
        int orange; 
        cin >> orange; 
        total += orange;
    }
    printf("%.12lf\n", total/n);


    return 0;
}

